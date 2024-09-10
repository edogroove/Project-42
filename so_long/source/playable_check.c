/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playable_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:29:46 by enanni            #+#    #+#             */
/*   Updated: 2024/09/10 12:41:29 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	floodfill(char **map, int y, int x)
{
	if (map[y][x] == '1' || map[y][x] == 'E' || map[y][x] == 'X')
		return ;
	map[y][x] = 'X';
	floodfill(map, y + 1, x);
	floodfill(map, y - 1, x);
	floodfill(map, y, x + 1);
	floodfill(map, y, x - 1);
}
