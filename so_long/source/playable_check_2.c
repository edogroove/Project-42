/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playable_check_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 03:18:30 by enanni            #+#    #+#             */
/*   Updated: 2024/09/11 03:28:03 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	free_map_copy(t_game *game, char **map_copy)
{
	int	i;

	i = 0;
	while (i < game->plot.height)
		free(map_copy[i++]);
	free(map_copy);
}
