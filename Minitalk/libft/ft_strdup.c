/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:13:30 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 18:32:38 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	len = ft_strlen(s) + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (0);
	str = ft_memcpy(str, s, len);
	return (str);
}

/* int	main()
{
	char	*str;
	char	*str2;

	str = "test";
	str2 = ft_strdup(str);
	printf("%s\n", str2);
	free(str2);
	return (0);
} */