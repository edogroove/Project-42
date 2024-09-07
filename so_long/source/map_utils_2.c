/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:51:51 by enanni            #+#    #+#             */
/*   Updated: 2024/09/07 16:12:32 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	char_check(t_game *game, int y, int x)
{
	if (game->plot.map[y][x] == '1' || game->plot.map[y][x] == '0'
		|| game->plot.map[y][x] == 'P' || game->plot.map[y][x] == 'E'
		|| game->plot.map[y][x] == 'C')
		return (0);
	return (1);
}

void	char_validation_map(t_game *game, int y, int x)
{
	if (wall_check(game, y, x) == 1)
	{
		free_map(game);
		write(1, "Error: unconfined map\n", 22);
		exit(1);
	}
	if (char_check(game, y, x) == 1)
	{
		free_map(game);
		write(1, "Error: char not valid\n", 22);
		exit(1);
	}
	return ;
}

int	wall_check(t_game *game, int y, int x)
{
	if ((game->plot.map[game->plot.height - 1][x] != '1') || \
		(game->plot.map[0][x] != '1') || (game->plot.map[y] \
		[game->plot.lenght - 1] != '1') || (game->plot.map[y][0] != '1'))
		return (1);
	return (0);
}

void	basic_validation_map(t_game *game)
{
	if (element_check(&game->i) == 1)
	{
		free_map(game);
		write(1, "Error: wrong number of elements\n", 32);
		exit(1);
	}
	if (shape_check(game) == 1)
	{
		free_map(game);
		write(1, "Error: the map is not rectangular\n", 34);
		exit(1);
	}
	if (check_lines_size(game->plot.map) == 1)
	{
		free_map(game);
		write(1, "Error: invalid lines size\n", 26);
		exit(1);
	}
	return ;
}
