/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   av_check_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:04:16 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/29 14:12:00 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_correct_zero_arr(char **av)
{
	int	i;
	int	nb_zeros;

	nb_zeros = 0;
	i = 0;
	while (av[i])
	{
		nb_zeros += arg_is_zero(av[i]);
		i++;
	}
	if (nb_zeros > 1)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	if (have_duplicates_arr(av) == 1)
		return (1);
	return (0);
}

void	free_string_array(char **array)
{
	int	j;

	j = 0;
	if (array == NULL)
		return ;
	while (array[j])
	{
		free(array[j]);
		j++;
	}
	free(array);
}
