/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:51:09 by enanni            #+#    #+#             */
/*   Updated: 2024/07/17 11:40:48 by enanni           ###   ########.fr       */
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
		printf("Error: double line\n");
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
		printf("Error: Invalid file\n"); //printf
		exit(1);
	}
	read_map(game, fd);
}

static void	start_game(t_game *game, char *path)
{
	init_map(game, path);
	check_map(game);
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
		printf("Error: Format not supported\n"); //printf
		return (1);
	}
	else if (argc > 2)
	{
		printf("Error: Can't open multiple maps\n"); //printf
		return (1);
	}
	else if (argc == 2 && (check_map_exten(argv[1]) == 0))
		start_game(&game, argv[1]);
}
