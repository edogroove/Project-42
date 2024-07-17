/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:19:31 by enanni            #+#    #+#             */
/*   Updated: 2024/07/17 17:53:46 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define SPRITE_SIZE 32

# include "../libft/libft.h"
# include "get_next_line.h"
# include "mlx.h"

typedef struct s_counter
{
	int		empty;
	int		collectible;
	int		exit;
	int		start;
	int		movements;
}	t_counter;

typedef struct s_img
{
	void	*ptr;
	int		*pixels;
	int		line_size;
	int		mem;
	int		x;
	int		y;
	int		movements;
}	t_img;

typedef struct s_draw
{
	char	**map;
	int		height;
	int		lenght;
	char	*line;
}	t_draw;

typedef struct s_game
{
	void		*mlx_pointer;
	void		*window_pointer;
	t_counter	i;
	t_draw		plot;
	t_img		character;
	t_img		character_l;
	t_img		character_r;
	t_img		character_u;
	t_img		floor;
	t_img		wall;
	t_img		collect;
	t_img		portal;
	int			state;
}	t_game;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

int			ft_strcmp(const char *s1, const char *s2);
char		*file_to_string(int fd);
int			open_file(char *path);
int			ft_strcmp(const char *s1, const char *s2);
char		*join_temp_line(char *temp, char *line);
int			check_empty_line(char *string_map);
t_counter	init_counter(char *string_map);
t_counter	new_counter(void);
int			line_counter(char **map);
void		check_map(t_game *game);
void		basic_validation_map(t_game *game);
int			wall_check(t_game *game, int y, int x);
void		free_map(t_game *game);
int			check_lines_size(char **map);
int			element_check(t_counter *count);
int			shape_check(t_game *game);
void		char_validation_map(t_game *game, int y, int x);
void		init_window(t_game *game);

#endif
