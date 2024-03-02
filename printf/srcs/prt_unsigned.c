/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_unsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:55:56 by enanni            #+#    #+#             */
/*   Updated: 2024/02/29 14:31:13 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	u_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

void	put_unsigned(unsigned int nbr)
{
	static char	digits[] = "0123456789";

	if (nbr > 9)
		put_unsigned(nbr / 10);
	write(STDOUT_FILENO, &digits[nbr % 10], 1);
}

int	prt_unsigned(unsigned int nbr)
{
	put_unsigned(nbr);
	return (u_digits(nbr));
}