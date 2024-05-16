# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 18:35:25 by enanni            #+#    #+#              #
#    Updated: 2024/05/11 15:58:14 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFTPATH = ./libft
LIBFTNAME = libft.a
CFLAGS = -ggdb3 -Wall -Wextra -Werror -I./includes/
CC = cc

GREEN = \033[0;32m
NC = \033[0m

CHECKS =	av_check.c \
			av_check_duplicate.c \
			av_check_utils.c \
			initial_checks.c \
			all_checks.c

SRC =		main.c \
			ft_lstnew.c \
			ft_lstadd_back.c \
			utils.c

CHECKDIR = 	checks
SRCDIR = 	src

OBJS = $(addprefix $(CHECKDIR)/, $(CHECKS:.c=.o))
SRCOBJS = $(addprefix $(SRCDIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJS) $(SRCOBJS)
	$(MAKE) -C $(LIBFTPATH)
	@echo "$(GREEN)LIBFT OK$(NC)"
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	${CC} ${CFLAGS} ${OBJS} ${SRCOBJS} ./libft/libft.a -o ${NAME}
	@echo "$(GREEN)CC OK$(NC)"

clean:
	rm -f $(OBJS) $(SRCOBJS)
	make -C $(LIBFTPATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFTPATH) fclean
	@echo "$(GREEN)CLEAR OK$(NC)"

re: fclean all

.PHONY: all clean fclean re

.SILENT:
