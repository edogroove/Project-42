/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_checks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:02:22 by enanni            #+#    #+#             */
/*   Updated: 2024/06/11 10:49:39 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	initial_checks(char	**result)
{
	if (result == NULL)
	{
		free_string_array(result);
		return (1);
	}
	if (is_correct_zero_arr(result) == 1)
	{
		free_string_array(result);
		return (1);
	}
	if (have_duplicates_arr(result) == 1)
	{
		free_string_array(result);
		return (1);
	}
	return (0);
}

void	check_limits(char **result)
{
	int			j;
	long int	number;

	j = 0;
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
}

int	initial_checks_2(char **av)
{
	int			j;
	long int	number;
	char		**result;

	j = 0;
	if (is_correct_zero(av) == 1)
		exit(0);
	result = av_args(av);
	if (result == NULL)
		exit(0);
	while (result[j])
	{
		number = ft_atoi_ps(result[j]);
		if (number > INT_MAX || number < INT_MIN)
			ft_display_exit_ps();
		j++;
	}
	return (0);
}
