/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:51:09 by enanni            #+#    #+#             */
/*   Updated: 2024/07/15 16:03:32 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static int	check_map_ext(char *argv)
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
	void	*mlx;

	if (argc == 2 && (check_map_ext(argv[1]) == 1))
	{
		printf("Format not supported\n"); //printf
		return (1);
	}
	else if (argc > 2)
	{
		printf("Can't open multiple maps\n"); //printf
		return (1);
	}
	mlx = mlx_init;
	mlx_new_window(mlx, 50, 50, "so_long");
}
