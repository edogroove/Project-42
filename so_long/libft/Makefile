# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 11:37:03 by enanni            #+#    #+#              #
#    Updated: 2024/07/15 23:14:33 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN := $(shell tput -Txterm setaf 2)
RED := $(shell tput -Txterm setaf 1)
RESET := $(shell tput -Txterm sgr0)

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
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_printf.c \
		ft_hexa.c \
		ft_int.c \
		ft_ptr.c \
		ft_str.c \
		ft_unsigned.c

BSRC =	ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRC:.c=.o)

FLAGS = -ggdb3 -Wall -Wextra -Werror

$(NAME):	bonus
			cc -c $(FLAGS) $(SRCS)
			ar rc $(NAME) $(OBJS) $(BOBJS)
			@echo "$(GREEN)[LIBFT COMPILED]$(RESET)"

bonus:		$(BOBJS) $(OBJS)
			ar rc $(NAME) $(BOBJS) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS) $(BOBJS)

fclean:		clean
			rm -f $(NAME)
			@echo "$(RED)[LIBFT DELETED]$(RESET)"

re:			fclean all

.PHONY:		all clean fclean re bonus

.SILENT:
