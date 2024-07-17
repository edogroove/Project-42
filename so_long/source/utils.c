/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:29:42 by enanni            #+#    #+#             */
/*   Updated: 2024/07/17 16:08:08 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_empty_line(char *string_map)
{
	int	i;

	i = 0;
	while (string_map[i])
	{
		if (string_map[i] == '\n' && string_map[i + 1] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*join_temp_line(char *temp, char *line)
{
	char	*new_string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_string = malloc(ft_strlen(temp) + ft_strlen(line) + 1);
	if (!new_string)
		return (NULL);
	while (temp[i] != '\0')
	{
		new_string[i] = temp[i];
		i++;
	}
	while (line[j] != '\0')
	{
		new_string[i + j] = line[j];
		j++;
	}
	new_string[i + j] = '\0';
	free(temp);
	temp = NULL;
	return (new_string);
}

char	*file_to_string(int fd)
{
	char	*temp;
	char	*line;

	temp = ft_strdup("");
	while (fd)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		temp = join_temp_line(temp, line);
		free(line);
	}
	free(line);
	return (temp);
}

int	open_file(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		printf("Error: Invalid file\n"); // printf
		exit(1);
	}
	return (fd);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
