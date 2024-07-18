/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:29:18 by enanni            #+#    #+#             */
/*   Updated: 2024/07/18 12:04:02 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	render_sprite(t_game *game, int y, int x)
{
	if (game->plot.map[y][x] == 'E')
	{
		game->portal.x = x * SPRITE_SIZE;
		game->portal.y = y * SPRITE_SIZE;
		mlx_put_image_to_window(game->mlx_pointer, game->window_pointer, \
		game->portal.ptr, (x * SPRITE_SIZE), (y * SPRITE_SIZE));
	}
	else if (game->plot.map[y][x] == '1')
		mlx_put_image_to_window(game->mlx_pointer, game->window_pointer, \
		game->wall.ptr, (x * SPRITE_SIZE), (y * SPRITE_SIZE));
	else if (game->plot.map[y][x] == 'C')
	{
		mlx_put_image_to_window(game->mlx_pointer, game->window_pointer, \
		game->collect.ptr, (x * SPRITE_SIZE), (y * SPRITE_SIZE));
	}
	else
		mlx_put_image_to_window(game->mlx_pointer, game->window_pointer, \
		game->floor.ptr, (x * SPRITE_SIZE), (y * SPRITE_SIZE));
}

void	render_map(t_game *game)
{
	t_point	coord;

	coord.y = 0;
	while (game->plot.map[coord.y])
	{
		coord.x = 0;
		while (game->plot.map[coord.y][coord.x])
		{
			render_sprite(game, coord.y, coord.x);
			coord.x++;
		}
		coord.y++;
	}
	return ;
}

t_img	new_sprite(void *mlx, char *path)
{
	t_img	img;

	img.ptr = mlx_xpm_file_to_image(mlx, path, &img.x, &img.y);
	return (img);
}

void	init_images(t_game *game)
{
	game->wall = new_sprite(game->mlx_pointer, WALL_PATH);
	game->floor = new_sprite(game->mlx_pointer, FLOOR_PATH);
	game->collect = new_sprite(game->mlx_pointer, COLLECT_PATH);
	game->portal = new_sprite(game->mlx_pointer, PORTAL_PATH);
	game->character = new_sprite(game->mlx_pointer, CHAR_PATH);
	game->character_l = new_sprite(game->mlx_pointer, CHAR_L_PATH);
	game->character_r = new_sprite(game->mlx_pointer, CHAR_R_PATH);
	game->character_u = new_sprite(game->mlx_pointer, CHAR_U_PATH);
	game->state = image_init;
	return ;
}
