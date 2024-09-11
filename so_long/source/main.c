/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:51:09 by enanni            #+#    #+#             */
/*   Updated: 2024/09/11 01:04:32 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	read_map(t_game *game, int fd)
{
	char	*string_map;
	char	**map;

	string_map = file_to_string(fd);
	if (check_empty_line(string_map) == 1)
	{
		free(string_map);
		write(1, "Error: double line\n", 19);
		exit(1);
	}
	map = ft_split(string_map, '\n');
	game->i = init_counter(string_map);
	free(((char *)string_map));
	game->plot.map = map;
	game->plot.height = line_counter(map);
	game->plot.lenght = ft_strlen(map[0]);
	return ;
}

static void	init_map(t_game *game, char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Error: Invalid file\n", 20);
		exit(1);
	}
	read_map(game, fd);
}

static void	start_game(t_game *game, char *path)
{
	init_map(game, path);
	check_map(game);
	can_player_reach_exit(game, game->i.collectible);
	init_window(game);
	init_images(game);
	render_map(game);
	init_triggers(game, KEY_RELEASE, KEY_RELEASE_MASK, key_check);
	init_triggers(game, DESTROY_NOTIFY, NO_EVENT_MASK, red_cross);
	init_triggers(game, EXPOSE, EXPOSURE_MASK, mini_maker);
	mlx_loop(game->mlx_pointer);
}

static int	check_map_exten(char *argv)
{
	char	*string;

	string = ft_strrchr(argv, '.');
	if (string)
	{
		if (ft_strcmp(string, ".ber") == 0)
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2 && (check_map_exten(argv[1]) == 1))
	{
		write(1, "Error: Format not supported\n", 28);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Error: Can't open multiple maps\n", 33);
		return (1);
	}
	else if (argc == 2 && (check_map_exten(argv[1]) == 0))
		start_game(&game, argv[1]);
	return (0);
}
