# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 06:08:15 by enanni            #+#    #+#              #
#    Updated: 2024/05/14 06:46:55 by enanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./printf/includes/
CLIENT_SRCS = client.c
SERVER_SRCS = server.c
PRINTF_PATH = printf
LIBFT_ARCHIVE = $(PRINTF_PATH)/libft.a
CLIENT_NAME = client
SERVER_NAME = server

all: $(CLIENT_NAME) $(SERVER_NAME)

$(LIBFT_ARCHIVE):
	$(MAKE) -C $(PRINTF_PATH)

$(CLIENT_NAME): $(CLIENT_SRCS) $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) -o $@ $(CLIENT_SRCS)

$(SERVER_NAME): $(SERVER_SRCS) $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) $(LIBFT_ARCHIVE) -o $@ $(SERVER_SRCS) 

clean:
	$(MAKE) -C $(PRINTF_PATH) clean

fclean: clean
	$(MAKE) -C $(PRINTF_PATH) fclean
	rm -f $(CLIENT_NAME) $(SERVER_NAME)

re: fclean all

.PHONY: all clean fclean re bonus
