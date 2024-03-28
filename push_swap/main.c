/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:09:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/28 19:52:08 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		j;
	char	**result;
	int		number;

	if (ac == 2)
	{
		j = 0;
		result = av_one_arg(av);
		if (result == NULL)
			return (0);
		if (is_correct_zero_arr(result) == 1)
			return (0);
		if (have_duplicates_arr(result) == 1)
			return (0);
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			j++;
		}
		j = 0;
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			printf("%d\n", number);
			j++;
		}
	}
	if (ac > 2)
	{
		j = 0;
		if (is_correct_zero(av) == 1)
			return (1);
		result = av_args(av);
		if (result == NULL)
			return (0);
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			j++;
		}
		j = 0;
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			printf("%d\n", number);
			j++;
		}
	}
	return (0);
}
