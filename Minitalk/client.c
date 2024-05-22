/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 06:00:28 by enanni            #+#    #+#             */
/*   Updated: 2024/05/22 12:18:32 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

static int	g_sig_reciever;

void	sig_handler(int n, siginfo_t *info, void *context)
{
	static int	i;

	(void)context;
	(void)info;
	(void)n;
	g_sig_reciever = 1;
	if (n == SIGUSR2)
		i++;
}

int	char_to_bin(char c, int pid)
{
	int	timer;
	int	bit_index;

	bit_index = 7;
	while (bit_index >= 0)
	{
		timer = 0;
		if ((c >> bit_index) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (g_sig_reciever == 0)
		{
			if (timer == 50)
			{
				ft_printf("No response from server.");
				exit(1);
			}
			timer++;
			usleep(100);
		}
		g_sig_reciever = 0;
		bit_index--;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	struct sigaction	sa;
	int					byte_index;
	int					pid;

	if (argc != 3)
	{
		ft_printf("You need to pass 2 args");
		return (1);
	}
	byte_index = 0;
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		exit(EXIT_FAILURE);
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART | SA_SIGINFO;
	sa.sa_sigaction = sig_handler;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		ft_putstr_fd("Error sigaction\n", 1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		ft_putstr_fd("Error sigaction\n", 1);
	while (argv[2][byte_index])
		char_to_bin(argv[2][byte_index++], pid);
	char_to_bin('\0', pid);
	return (0);
}
