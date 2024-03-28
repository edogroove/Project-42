# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 12:23:13 by nmarmugi          #+#    #+#              #
#    Updated: 2024/03/28 17:30:50 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFTPATH = ./libft

LIBFTNAME = libft.a

SRCS =	av_check.c \
		main.c \
		av_check_duplicate.c \
		av_check_utils.c
		
OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME):
		make -C $(LIBFTPATH)
		cp ./libft/libft.a .
		mv libft.a $(NAME)
		cc -c $(FLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)

all:		$(NAME)
clean:
			rm -f $(OBJS)
			make -C $(LIBFTPATH) clean
fclean:		clean
			rm -f $(NAME)
			make -C $(LIBFTPATH) fclean
re:			fclean all
.PHONY:		all clean fclean re
