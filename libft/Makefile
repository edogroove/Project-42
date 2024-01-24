# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parallels <parallels@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 15:12:39 by enanni            #+#    #+#              #
#    Updated: 2024/01/24 17:28:36 by parallels        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \

OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
$(NAME):
		cc -c $(FLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)
all:		$(NAME)
clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean all
.PHONY:		all clean fclean re