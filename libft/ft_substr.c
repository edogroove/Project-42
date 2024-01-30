/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:45:50 by enanni            #+#    #+#             */
/*   Updated: 2024/01/30 20:16:36 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*str;
	unsigned int	l;

	i = 0;
	l = ft_strlen(s);
	if (start > l)
		return (0);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main()
{
	char	*str;
	char	*str2;

	str = "test 555";
	str2 = ft_substr(str, 5, 2);
	printf("%s\n", str2);
} */