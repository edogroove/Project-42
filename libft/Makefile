# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 15:12:39 by enanni            #+#    #+#              #
#    Updated: 2024/01/22 17:56:03 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft_isalpha.c \
		ft_isdigit.c \

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