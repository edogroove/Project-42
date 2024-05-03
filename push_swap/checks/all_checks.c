/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:39:59 by enanni            #+#    #+#             */
/*   Updated: 2024/05/03 11:54:06 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	all_checks(int ac, char **av)
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
		free_string_array(result);
	}
	if (ac > 2)
	{
		j = 1;
		initial_checks_2(av);
	}
	return (0);
}
