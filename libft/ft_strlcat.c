/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:46:32 by enanni            #+#    #+#             */
/*   Updated: 2024/01/25 12:02:42 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (i < size && dst[i])
	{
		i++;
	}
	while ((i + k + 1) < size && src[k])
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i != size)
	{
		dst[i + k] = '\0';
	}
	return (i + ft_strlen(src));
}

/* int	main()
{
	char	src[] = "prova";
	char	dst[] = "cat";
	ft_strlcat(dst, src, 7);
	printf("%s\n", dst);
	return (0);
} */