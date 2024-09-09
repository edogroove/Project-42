/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:12:24 by enanni            #+#    #+#             */
/*   Updated: 2024/09/09 13:39:36 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	render_player(t_game *game)
{
	mlx_put_image_to_window(game->mlx_pointer, game->window_pointer,
		game->character.ptr, game->character.x, game->character.y);
}

void	player_init(t_game *game)
{
	t_point	point;

	point.y = 0;
	while (game->plot.map[point.y])
	{
		point.x = 0;
		while (game->plot.map[point.y][point.x])
		{
			if (game->plot.map[point.y][point.x] == 'P')
			{
				game->character.x = (SPRITE_SIZE * point.x);
				game->character.y = (SPRITE_SIZE * point.y);
				render_player(game);
				return ;
			}
			point.x++;
		}
		point.y++;
	}
	return ;
}

void	init_window(t_game *game)
{
	game->mlx_pointer = mlx_init();
	game->window_pointer = mlx_new_window(\
	game->mlx_pointer, \
	(game->plot.lenght * SPRITE_SIZE), \
	(game->plot.height * SPRITE_SIZE), \
	"so_long");
}

int	mini_maker(t_game *game)
{
	render_map(game);
	if (game->i.movements == 0)
		player_init(game);
	else
		mlx_put_image_to_window(game->mlx_pointer, game->window_pointer,
			game->character.ptr, game->character.x, game->character.y);
	return (0);
}
