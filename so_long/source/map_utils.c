/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:00:30 by enanni            #+#    #+#             */
/*   Updated: 2024/07/17 17:53:03 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_lines_size(char **map)
{
	size_t	line;
	int		i;

	i = 0;
	line = ft_strlen(map[0]);
	while (map[i])
	{
		if (ft_strlen(map[i]) != line)
			return (1);
		i++;
	}
	return (0);
}

void	free_map(t_game	*game)
{
	while (game->plot.height > 0)
	{
		free(game->plot.map[game->plot.height - 1]);
		game->plot.height--;
	}
	free(game->plot.map);
	return ;
}

int	shape_check(t_game *game)
{
	if (game->plot.height == game->plot.lenght)
		return (1);
	return (0);
}

int	element_check(t_counter *count)
{
	if (count->collectible > 0 && count->empty > 0
		&& count->exit == 1 && count->start == 1)
		return (0);
	return (1);
}

void	check_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	basic_validation_map(game);
	while (game->plot.map[y])
	{
		x = 0;
		while (game->plot.map[y][x])
		{
			char_validation_map(game, y, x);
			x++;
		}
		y++;
	}
	return ;
}
