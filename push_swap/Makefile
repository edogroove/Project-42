# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 18:35:25 by enanni            #+#    #+#              #
#    Updated: 2024/05/09 12:25:47 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFTPATH = ./libft
LIBFTNAME = $(LIBFTPATH)/libft.a
CC = cc
CFLAGS = -g -Wall -Wextra -Werror -I./includes/

SRC =		main.c \
			ft_lstnew.c \
			ft_lstadd_back.c

CHECKS =	av_check.c \
			av_check_duplicate.c \
			av_check_utils.c \
			initial_checks.c \
			all_checks.c

CHECKDIR = 	checks
SRCDIR = 	src

CHECKOBJ = $(addprefix $(CHECKDIR)/, $(CHECKS:.c=.o))
SRCOBJS = $(addprefix $(SRCDIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(CHECKOBJ) $(SRCOBJS)
	$(MAKE) -C $(LIBFTPATH)
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(CHECKOBJ) $(SRCOBJS)
	$(CC) $(FLAGS) $(CHECKOBJ) $(SRCOBJS) $(LIBFTNAME) -o $(NAME)

clean:
		rm -f $(CHECKOBJ) $(SRCOBJS)
		make -C $(LIBFTPATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFTPATH) fclean

re: fclean all

.PHONY: all clean fclean re

.SILENT:
