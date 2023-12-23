/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:59:14 by enanni            #+#    #+#             */
/*   Updated: 2023/11/22 15:17:06 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 18;

	ft_div_mod(a, b, &div, &mod);
	printf("Divisione: %d Modulo: %d\n", div, mod);
}*/
