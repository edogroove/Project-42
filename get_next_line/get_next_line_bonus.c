/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:39:02 by enanni            #+#    #+#             */
/*   Updated: 2024/04/05 06:55:12 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*cut(char *line)
{
	size_t	count;
	char	*backup;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (NULL);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[count + 1] = '\0';
	return (backup);
}

static char	*ft_read_line(int fd, char *buf, char *backup)
{
	int		read_line;
	char	*temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line == -1)
			return (NULL);
		else if (read_line == 0)
			break ;
		buf[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		temp = backup;
		backup = ft_strjoin(temp, buf);
		free(temp);
		temp = NULL;
		if (ft_strchr (buf, '\n'))
			break ;
	}
	return (backup);
}

char	*get_next_line(int fd)
{
	char			*line;
	char			*buf;
	static char		*backup[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	line = ft_read_line(fd, buf, backup[fd]);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	backup[fd] = cut(line);
	return (line);
}

/* int		main(void)
{
	char	*line;
	char	*line2;
	int		fd;
	int		fd2;
	
	fd = open("test.txt", O_RDONLY);
	fd2 = open("read_error.txt", O_RDONLY);
	while (((line = get_next_line(fd)) != NULL) &&
	(line2 = get_next_line(fd2)) != NULL)
	{
		printf("%s", line);
		free(line);
		printf("%s", line2);
		free(line2);
	}
	close(fd);
	close(fd2);
	return (0);
}
  */