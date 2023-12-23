/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:13:58 by enanni            #+#    #+#             */
/*   Updated: 2023/11/26 16:19:31 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = (size -1);
	while (j > i)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}
/*
int	main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size;
	int *tab;
	int i;
	
	i = 0;
	size = 10;
	tab = arr;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", arr[i]);
		if(i != (size - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return 0;
}*/
