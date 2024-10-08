/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:24:51 by enanni            #+#    #+#             */
/*   Updated: 2024/09/07 14:58:17 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	red_cross(t_game *game)
{
	destroy_image(game);
	free_map(game);
	free(game->mlx_pointer);
	exit(0);
}
