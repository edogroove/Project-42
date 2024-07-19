/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:19:59 by enanni            #+#    #+#             */
/*   Updated: 2024/07/19 12:31:31 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_check(int keycode, t_game *game)
{
	game->character.mem = 0;
	if (keycode == ESC)
	{
		free_map(game);
		exit(0);
	}
/* 	else if (keycode == LEFT)
		move_left(game);
	else if (keycode == RIGHT)
		move_right(game);
	else if (keycode == UP)
		move_up(game);
	else if (keycode == DOWN)
		move_down(game); */
	return (0);
}
