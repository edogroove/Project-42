# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 13:15:38 by enanni            #+#    #+#              #
#    Updated: 2024/07/15 16:13:44 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN := $(shell tput -Txterm setaf 2)
RED := $(shell tput -Txterm setaf 1)
RESET := $(shell tput -Txterm sgr0)

CC = cc
CFLAGS = -ggdb3 -Wall -Wextra -Werror -I/usr/local/include -L/usr/local/lib -lmlx -lXext -lX11 -lm
INCLUDE = -I ./includes
LIBFT_PATH = libft
LIBFT_ARCHIVE = $(LIBFT_PATH)/libft.a
NAME = so_long
MLX = -lmlx -lXext -lX11

SRCS = source/main.c source/utils.c

OBJ = $(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -O2 -c $< -o $(<:%.c=%.o)

$(LIBFT_ARCHIVE):
	$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJ) $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) $(MLX) -o $(NAME) $(SRCS) $(LIBFT_ARCHIVE)
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
