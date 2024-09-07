/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:52:58 by enanni            #+#    #+#             */
/*   Updated: 2024/09/07 12:57:53 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static bool	is_up_wall(t_game *game)
{
	return (! \
	(game->plot.map \
	[((game->character.y - SPRITE_SIZE) / SPRITE_SIZE)] \
	[(game->character.x / SPRITE_SIZE)] != '1') \
	);
}

static void	check_up(t_game *game)
{
	if ((game->character.y > SPRITE_SIZE))
	{
		if (!is_up_wall(game))
		{
			game->character.y -= SPRITE_SIZE;
			render_map(game);
			print_moves(game);
		}
	}
	return ;
}

void	move_up(t_game *game)
{
	check_up(game);
	game->character.mem = up;
	mlx_put_image_to_window(game->mlx_pointer, game->window_pointer,
		game->character.ptr, game->character.x, game->character.y);
	return ;
}
