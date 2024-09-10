/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playable_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:29:46 by enanni            #+#    #+#             */
/*   Updated: 2024/09/10 21:26:41 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	playable_check(char **map, int x, int y, int *collectibles, int *exit_found)
{
    if (map[y][x] == '1') return; // Se è un muro, fermati.
    if (map[y][x] == 'C') (*collectibles)--; // Collezionabile trovato
    if (map[y][x] == 'E') *exit_found = 1; // Uscita trovata

    map[y][x] = '1'; // Marca come visitato

    // Esplora le 4 direzioni (su, giù, sinistra, destra)
    playable_check(map, x + 1, y, collectibles, exit_found);
    playable_check(map, x - 1, y, collectibles, exit_found);
    playable_check(map, x, y + 1, collectibles, exit_found);
    playable_check(map, x, y - 1, collectibles, exit_found);
}

int	can_player_reach_exit(char **map, int collectible_count)
{
	char **map_copy;
	int x;
	int y;

	x = 0;
	y = 0;
	map_copy = map;
    int exit_found = 0;
    playable_check(map_copy, x, y, &collectible_count, &exit_found);
    if (collectible_count == 0 && exit_found)
		return(0);
	return (1);
}
