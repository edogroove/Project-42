/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:25:38 by enanni            #+#    #+#             */
/*   Updated: 2024/09/07 12:57:33 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static bool	is_left_wall(t_game *game)
{
	return (! \
	(game->plot.map \
	[(game->character.y / SPRITE_SIZE)] \
	[((game->character.x - SPRITE_SIZE) / SPRITE_SIZE)] != '1') \
	);
}

static void	check_left(t_game *game)
{
	if ((game->character.x > SPRITE_SIZE))
	{
		if (!is_left_wall(game))
		{
			game->character.x -= SPRITE_SIZE;
			render_map(game);
			print_moves(game);
		}
	}
	return ;
}

void	move_left(t_game *game)
{
	check_left(game);
	game->character.mem = left;
	mlx_put_image_to_window(game->mlx_pointer, game->window_pointer,
		game->character.ptr, game->character.x, game->character.y);
	return ;
}
