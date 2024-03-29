# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 20:03:52 by nmarmugi          #+#    #+#              #
#    Updated: 2024/03/28 20:03:54 by nmarmugi         ###   ########.fr        #
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
