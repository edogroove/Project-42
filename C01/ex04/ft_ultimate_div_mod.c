/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:49 by enanni            #+#    #+#             */
/*   Updated: 2023/11/22 16:03:22 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}
/*
int main()
{
	int a;
	int b;

	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a,&b);
	printf("Divisione: %d Modulo: %d\n", a,b);
}*/
