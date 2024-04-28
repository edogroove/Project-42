/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:18:45 by enanni            #+#    #+#             */
/*   Updated: 2024/04/24 22:22:55 by enanni           ###   ########.fr       */
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
		if (initial_checks(result) == 1)
			return (0);
		check_limits(result);
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
		j = 2;
		initial_checks_2(av);
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			printf("%ld\n", number);
			j++;
		}
	}
	return (0);
}
