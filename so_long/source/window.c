/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:12:24 by enanni            #+#    #+#             */
/*   Updated: 2024/07/17 17:44:06 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_window(t_game *game)
{
	game->mlx_pointer = mlx_init();
	game->window_pointer = mlx_new_window(\
	game->mlx_pointer, \
	(game->plot.lenght * SPRITE_SIZE), \
	(game->plot.height * SPRITE_SIZE), \
	"so_long");
}
