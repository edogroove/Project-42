/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:39:47 by enanni            #+#    #+#             */
/*   Updated: 2024/07/16 14:38:43 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char	*gnl_ft_substr(char const *s, unsigned int start, size_t len);
int		gnl_ft_strlen(const char *str);
char	*gnl_ft_strchr(const char *s, int i);
char	*gnl_ft_strdup(const char *s);
char	*gnl_ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

#endif