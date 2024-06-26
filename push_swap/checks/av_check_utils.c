/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   av_check_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:34:35 by enanni            #+#    #+#             */
/*   Updated: 2024/05/22 14:48:57 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	have_duplicates_arr(av);
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
