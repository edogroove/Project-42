# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 06:08:15 by enanni            #+#    #+#              #
#    Updated: 2024/05/14 17:32:22 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN := $(shell tput -Txterm setaf 2)
RED := $(shell tput -Txterm setaf 1)
RESET := $(shell tput -Txterm sgr0)

CC = cc
CFLAGS = -g -Wall -Wextra -Werror
CLIENT_SRCS = client.c
SERVER_SRCS = server.c
LIBFT_PATH = libft
LIBFT_ARCHIVE = $(LIBFT_PATH)/libft.a
CLIENT_NAME = client
SERVER_NAME = server

all: $(CLIENT_NAME) $(SERVER_NAME)

$(LIBFT_ARCHIVE):
	$(MAKE) -C $(LIBFT_PATH)

$(CLIENT_NAME): $(CLIENT_SRCS) $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) -o $@ $(CLIENT_SRCS) $(LIBFT_ARCHIVE)
	@echo "$(GREEN)[CLIENT COMPILED]$(RESET)"

$(SERVER_NAME): $(SERVER_SRCS) $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) -o $@ $(SERVER_SRCS) $(LIBFT_ARCHIVE)
	@echo "$(GREEN)[SERVER COMPILED]$(RESET)"

clean:
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(CLIENT_NAME) $(SERVER_NAME)
	@echo "$(RED)[CLIENT DELETED]$(RESET)"
	@echo "$(RED)[SERVER DELETED]$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus

.SILENT:
