/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:39:47 by enanni            #+#    #+#             */
/*   Updated: 2024/03/15 15:37:58 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1000
# endif

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

char	*get_next_line(int fd);
char	*ft_read_str(int fd, char *str);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *left_str, char *buff);
char	*get_line(char *str);
char	*new_str(char *left_str);

#endif