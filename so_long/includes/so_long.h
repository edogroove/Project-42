/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:19:31 by enanni            #+#    #+#             */
/*   Updated: 2024/07/19 12:27:18 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define SPRITE_SIZE 32
# define WALL_PATH		"./img/wall.xpm"
# define FLOOR_PATH		"./img/ground.xpm"
# define COLLECT_PATH	"./img/collect.xpm"
# define PORTAL_PATH	"./img/exit.xpm"
# define CHAR_PATH		"./img/link_sprites/char.xpm"
# define CHAR_L_PATH	"./img/link_sprites/left_1__.xpm"
# define CHAR_R_PATH	"./img/link_sprites/right_1__.xpm"
# define CHAR_U_PATH	"./img/link_sprites/up_1__.xpm"

# define UP		119
# define DOWN	115
# define LEFT	97
# define RIGHT	100
# define ESC	65307
# define RED	"\033[1m\033[31m"
# define GREEN	"\033[1m\033[32m"
# define ENDC	"\033[0m"
# define WINDOW_NAME	"./so_long"
# define SPRITE_SIZE	32

# define KEY_RELEASE	3
# define DESTROY_NOTIFY	17
# define EXPOSE		12

# define KEY_RELEASE_MASK	2
# define NO_EVENT_MASK		0
# define EXPOSURE_MASK		32768

# include "../libft/libft.h"
# include "get_next_line.h"
# include "mlx.h"

enum e_state
{
	event_ending = -1,
	game_over = -1,
	error = 2,
	file_error = 3,
	map_char_error = 4,
	image_init = 5,
};

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
void		init_images(t_game *game);
void		render_map(t_game *game);
void		init_triggers(t_game *game, int event, int mask, int (*f)());
int			key_check(int keycode, t_game *game);
int			red_cross(t_game *game);

#endif
