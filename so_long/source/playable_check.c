/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playable_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:29:46 by enanni            #+#    #+#             */
/*   Updated: 2024/09/11 04:03:37 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error_playable(t_game *game)
{
	write(1, "Error: map not playable\n", 24);
	free_map(game);
	exit (0);
}

char	**copy_map(char **map, int height, int lenght)
{
	char	**map_copy;
	int		i;
	int		j;

	map_copy = (char **)malloc(height * sizeof(char *));
	i = 0;
	while (i < height)
	{
		map_copy[i] = (char *)malloc((lenght + 1) * sizeof(char));
		if (!map_copy[i])
		{
			j = 0;
			while (j < i)
			{
				free(map_copy[j]);
				j++;
			}
			free(map_copy);
			return (NULL);
		}
		ft_strlcpy(map_copy[i], map[i], lenght + 1);
		i++;
	}
	return (map_copy);
}

void	player_finder(t_game *game, int *x, int *y)
{
	*y = 0;
	while (game->plot.map[*y])
	{
		*x = 0;
		while (game->plot.map[*y][*x])
		{
			if (game->plot.map[*y][*x] == 'P')
			{
				game->character.x = (SPRITE_SIZE * (*x));
				game->character.y = (SPRITE_SIZE * (*y));
				return ;
			}
			(*x)++;
		}
		(*y)++;
	}
	return ;
}

void	play_check(t_play_check_params params, int x, int y)
{
	if (params.map[y][x] == '1' || params.map[y][x] == 'X')
		return ;
	if (params.map[y][x] == 'C')
		(*(params.collectable))--;
	if (params.map[y][x] == 'E')
		*(params.exit_found) = 1;
	params.map[y][x] = 'X';
	play_check(params, x + 1, y);
	play_check(params, x - 1, y);
	play_check(params, x, y + 1);
	play_check(params, x, y - 1);
}

void	can_player_reach_exit(t_game *game, int collectible_count)
{
	t_play_check_params	params;
	char				**map_copy;
	int					exit_found;
	int					x;
	int					y;

	player_finder(game, &x, &y);
	map_copy = copy_map(game->plot.map, game->plot.height, game->plot.lenght);
	if (!map_copy)
		return ;
	exit_found = 0;
	params.map = map_copy;
	params.collectable = &collectible_count;
	params.exit_found = &exit_found;
	play_check(params, x, y);
	free_map_copy(game, map_copy);
	if (exit_found != 1 && collectible_count != 0)
	{
		error_playable(game);
	}
}
