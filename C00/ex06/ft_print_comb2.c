/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:29:14 by enanni            #+#    #+#             */
/*   Updated: 2023/11/18 14:14:43 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num;
	int	counter;

	num = 0;
	counter = 0;
	while (num < 100)
	{
		counter = num + 1;
		while (counter < 100)
		{
			ft_putchar(num / 10 + '0');
			ft_putchar(num % 10 + '0');
			ft_putchar(' ');
			ft_putchar(counter / 10 + '0');
			ft_putchar(counter % 10 + '0');
			if ((num / 10 != 9) || (num % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			counter++;
		}
		num++;
	}
}
