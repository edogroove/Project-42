/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:41:26 by enanni            #+#    #+#             */
/*   Updated: 2023/11/21 17:38:30 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	ptra = &a;
	ptrb = &b;

	a = 55;
	b = 20;
	ft_swap(ptra, ptrb);
	printf("A: %d B: %d", a, b);
}*/
