# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 18:35:25 by enanni            #+#    #+#              #
#    Updated: 2024/06/10 08:07:22 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFTPATH = ./libft
LIBFTNAME = libft.a
CFLAGS = -ggdb3 -Wall -Wextra -Werror -I./includes/
CC = cc

GREEN := $(shell tput -Txterm setaf 2)
RED := $(shell tput -Txterm setaf 1)
RESET := $(shell tput -Txterm sgr0)

CHECKS =	av_check.c \
			av_check_duplicate.c \
			av_check_utils.c \
			initial_checks.c \
			all_checks.c

SRC =		main.c \
			ft_lstnew.c \
			ft_lstadd_back.c \
			ft_lstsize.c \
			utils.c \
			utils2.c \
			utils3.c \
			utils4.c \
			moves.c \
			moves2.c \
			moves3.c \
			sort.c \
			sort2.c

CHECKDIR = 	checks
SRCDIR = 	src

OBJS = $(addprefix $(CHECKDIR)/, $(CHECKS:.c=.o))
SRCOBJS = $(addprefix $(SRCDIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJS) $(SRCOBJS)
	$(MAKE) -C $(LIBFTPATH)
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	${CC} ${CFLAGS} ${OBJS} ${SRCOBJS} ./libft/libft.a -o ${NAME}
	@echo "$(GREEN)PUSH SWAP COMPILED$(RESET)"

clean:
	rm -f $(OBJS) $(SRCOBJS)
	make -C $(LIBFTPATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFTPATH) fclean
	echo "$(RED)PUSH SWAP DELETED$(RESET)"

re: fclean all

.PHONY: all clean fclean re

.SILENT:
