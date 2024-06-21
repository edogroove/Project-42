/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:39:59 by enanni            #+#    #+#             */
/*   Updated: 2024/06/21 11:20:28 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	all_checks(int ac, char **av)
{
	char		**result;

	if (ac == 2)
	{
		result = av_one_arg(av);
		if (initial_checks(result) == 1)
			exit (0);
		check_limits(result);
		free_string_array(result);
	}
	if (ac > 2)
		initial_checks_2(av);
	return (0);
}
