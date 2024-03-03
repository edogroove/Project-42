/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:01:15 by enanni            #+#    #+#             */
/*   Updated: 2024/03/03 11:06:34 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main(void)
{
	char			*str;
	int				n;
	unsigned int	u;
	int				hex;
	char			c;

	str = "test";
	n = -10;
	u = 10;
	hex = 0x1F4;
	c = 'c';

	ft_printf("%%c: %c\n", c);
	printf("%%c: %c\n", c);

	ft_printf("\n\n");

	ft_printf("%%s: %s\n", str);
	printf("%%s: %s\n", str);

	ft_printf("\n\n");

	ft_printf("%%p: %p\n", str);
	printf("%%p: %p\n", str);

	ft_printf("\n\n");

	ft_printf("%%d: %d\n", n);
	printf("%%d: %d\n", n);

	ft_printf("\n\n");

	ft_printf("%%i: %i\n", n);
	printf("%%i: %i\n", n);

	ft_printf("\n\n");

	ft_printf("%%u: %u\n", u);
	printf("%%u: %u\n", u);

	ft_printf("\n\n");

	ft_printf("%%x: %x\n", hex);
	printf("%%x: %x\n", hex);

	ft_printf("\n\n");

	ft_printf("%%X: %X\n", hex);
	printf("%%X: %X\n", hex);

	return (0);
}