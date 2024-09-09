/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:19:59 by enanni            #+#    #+#             */
/*   Updated: 2024/09/09 12:04:37 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	print_moves(t_game *game)
{
	game->i.movements += 1;
	if (game->plot.map[game->character.y / SPRITE_SIZE] \
	[game->character.x / SPRITE_SIZE] == 'C')
	{
		game->plot.map[game->character.y / SPRITE_SIZE] \
		[game->character.x / SPRITE_SIZE] = '0';
		game->i.collectible--;
	}
	else if (game->plot.map[game->character.y / SPRITE_SIZE]
		[game->character.x / SPRITE_SIZE] == 'E' && game->i.collectible == 0)
	{
		destroy_image(game);
		free_map(game);
		free(game->mlx_pointer);
		exit(0);
	}
	ft_putstr_fd("\rMovements: ", 1);
	ft_putnbr_fd(game->i.movements, 1);
	return ;
}

int	key_check(int keycode, t_game *game)
{
	game->character.mem = 0;
	if (keycode == ESC)
	{
		destroy_image(game);
		free_map(game);
		free(game->mlx_pointer);
		exit(0);
	}
	else if (keycode == LEFT)
		move_left(game);
	else if (keycode == RIGHT)
		move_right(game);
	else if (keycode == UP)
		move_up(game);
	else if (keycode == DOWN)
		move_down(game);
	return (0);
}
