/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:31:40 by enanni            #+#    #+#             */
/*   Updated: 2024/09/07 11:32:53 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static bool	is_down_wall(t_game *game)
{
	return (! \
	(game->plot.map \
	[((game->character.y + SPRITE_SIZE) / SPRITE_SIZE)] \
	[(game->character.x / SPRITE_SIZE)] != '1') \
	);
}

static void	check_down(t_game *game)
{
	if (game->character.y < \
	((game->plot.height * SPRITE_SIZE) - (SPRITE_SIZE * 2)))
	{
		if (!is_down_wall(game))
		{
			game->character.y += SPRITE_SIZE;
			render_map(game);
			print_moves(game);
		}
	}
	return ;
}

void	move_down(t_game *game)
{
	check_down(game);
	game->character.mem = down;
	mlx_put_image_to_window(game->mlx_pointer, game->window_pointer,
		game->character.ptr, game->character.x, game->character.y);
	return ;
}
