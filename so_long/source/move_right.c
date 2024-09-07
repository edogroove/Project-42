/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:02:53 by enanni            #+#    #+#             */
/*   Updated: 2024/09/07 15:50:50 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static bool	is_right_wall(t_game *game)
{
	return (! \
	(game->plot.map \
	[(game->character.y / SPRITE_SIZE)] \
	[((game->character.x + SPRITE_SIZE) / SPRITE_SIZE)] != '1') \
	);
}

static void	check_right(t_game *game)
{
	if (game->character.x < \
	((game->plot.lenght * SPRITE_SIZE) - (SPRITE_SIZE * 2)))
	{
		if (!is_right_wall(game))
		{
			game->character.x += SPRITE_SIZE;
			render_map(game);
			print_moves(game);
		}
	}
	return ;
}

void	move_right(t_game *game)
{
	check_right(game);
	game->character.mem = right;
	mlx_put_image_to_window(game->mlx_pointer, \
	game->window_pointer, game->character.ptr, \
	game->character.x, game->character.y);
	return ;
}
