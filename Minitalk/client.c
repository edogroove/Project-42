/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 06:00:28 by enanni            #+#    #+#             */
/*   Updated: 2024/05/24 11:03:20 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

static int	g_signal;

void	sig_handler(int n, siginfo_t *info, void *context)
{
	(void)context;
	(void)info;
	(void)n;
	if (n == SIGUSR1)
		ft_printf("\nMessage recived\n");
	g_signal = 1;
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
		while (g_signal == 0)
		{
			if (timer == 50)
			{
				ft_printf("No response from server.\n");
				exit(1);
			}
			timer++;
			usleep(100);
		}
		g_signal = 0;
		bit_index--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	int					byte_index;
	int					pid;

	if (argc != 3)
	{
		ft_printf("Insert 2 args\n");
		return (1);
	}
	byte_index = 0;
	pid = ft_atoi(argv[1]);
	if (pid <= 1)
		exit(1);
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
