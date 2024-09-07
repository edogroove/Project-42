/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:39:44 by enanni            #+#    #+#             */
/*   Updated: 2024/09/07 15:57:32 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	line_counter(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

void	count_elem(t_counter *count, char c)
{
	if (c == 'C')
		count->collectible++;
	else if (c == 'E')
		count->exit++;
	else if (c == 'P')
		count->start++;
	else if (c == '0')
		count->empty++;
}

t_counter	new_counter(void)
{
	t_counter	counter;

	counter.collectible = 0;
	counter.start = 0;
	counter.exit = 0;
	counter.movements = 0;
	counter.empty = 0;
	return (counter);
}

t_counter	init_counter(char *string_map)
{
	t_counter	count;
	int			i;

	i = 0;
	count = new_counter();
	while (string_map[i] != '\0')
	{
		count_elem(&count, string_map[i]);
		i++;
	}
	return (count);
}
