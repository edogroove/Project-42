/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:18:45 by enanni            #+#    #+#             */
/*   Updated: 2024/04/23 20:03:19 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int			j;
	char		**result;
	long int	number;

	if (ac == 2)
	{
		j = 0;
		result = av_one_arg(av);
		if (result == NULL)
		{
			free_string_array(result);
			return (0);
		}
		if (is_correct_zero_arr(result) == 1)
		{
			free_string_array(result);
			return (0);
		}
		if (have_duplicates_arr(result) == 1)
		{
			free_string_array(result);
			return (0);
		}
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			if (number > INT_MAX || number < INT_MIN)
			{
				free_string_array(result);
				ft_display_exit_ps();
			}
			j++;
		}
		j = 0;
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			printf("%ld\n", number);
			j++;
		}
		free_string_array(result);
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
			if (number > INT_MAX || number < INT_MIN)
				ft_display_exit_ps();
			j++;
		}
		j = 0;
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			printf("%ld\n", number);
			j++;
		}
	}
	return (0);
}
