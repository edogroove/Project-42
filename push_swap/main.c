/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:09:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/28 17:31:25 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	char	**result;

	i = 0;
	if (ac == 2)
	{
		result = av_one_arg(av);
		if (result == NULL)
			return (0);
		if (is_correct_zero_arr(result) == 1)
			return (0);
		if (have_duplicates_arr(result) == 1)
			return (0);
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	if (ac > 2)
	{
		if (is_correct_zero(av) == 1)
			return (1);
		result = av_args(av);
		if (result == NULL)
			return (0);
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	return (0);
}
