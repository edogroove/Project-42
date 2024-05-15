/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 06:00:28 by enanni            #+#    #+#             */
/*   Updated: 2024/05/15 18:17:50 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void send_signal(int pid, unsigned char character)
{
    int i;
    unsigned char temp_char;

    i = 8;
    temp_char = character;
    while (i > 0)
    {
        i--;
        if ((temp_char >> i) & 1)
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        usleep(300);
    }
}

int main(int argc, char **argv)
{
    struct sigaction sa;
    pid_t server_pid;
    const char *message;
    int i;

    if (argc != 3)
    {
        ft_printf("Usage: %s <pid> <message>\n", argv[0]);
        exit(0);
    }
    server_pid = ft_atoi(argv[1]);
    message = argv[2];
    i = 0;

    ft_memset(&sa, 0, sizeof(sa));
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    while (message[i])
        send_signal(server_pid, message[i++]);
    send_signal(server_pid, '\0');
    return (0);
}
