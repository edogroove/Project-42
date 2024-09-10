# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 13:15:38 by enanni            #+#    #+#              #
#    Updated: 2024/09/10 10:29:43 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN := $(shell tput -Txterm setaf 2)
RED := $(shell tput -Txterm setaf 1)
RESET := $(shell tput -Txterm sgr0)

CC = cc
CFLAGS = -ggdb3 -Wall -Wextra -Werror
INCLUDE = -I ./includes
LIBFT_PATH = libft
LIBFT_ARCHIVE = $(LIBFT_PATH)/libft.a
MINILIBX_PATH =	 minilibx-linux
MINILIBX = $(MINILIBX_PATH)/libmlx_Linux.a
NAME = so_long
MLX = -lm -lXext -lX11
LIB_FLAGS = -L ./libft -lft

SRCS = 	source/main.c \
		source/utils.c \
		source/utils_2.c \
		source/get_next_line.c \
		source/get_next_line_utils.c \
		source/map.c \
		source/map_utils.c \
		source/map_utils_2.c \
		source/window.c \
		source/images.c \
		source/move.c \
		source/move_down.c \
		source/move_left.c \
		source/move_right.c \
		source/move_up.c \
		source/exit.c

OBJ = $(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:%.c=%.o)

$(LIBFT_ARCHIVE):
	$(MAKE) -C $(LIBFT_PATH)

$(MINILIBX):
	$(MAKE) -C $(MINILIBX_PATH)

$(NAME): $(OBJ)
	make all -C ./libft
	$(CC) $(CFLAGS) $(OBJ) $(LIB_FLAGS) $(MINILIBX) $(MLX) -o $(NAME)
	@echo "$(GREEN)[SO_LONG COMPILED]$(RESET)"

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	rm -rf $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(NAME)
	@echo "$(RED)[SO_LONG DELETED]$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus

.SILENT:
