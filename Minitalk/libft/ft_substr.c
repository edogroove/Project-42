/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:45:50 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 22:36:28 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	finish = slen - start;
	if (finish > len)
		finish = len;
	str = (char *)malloc(sizeof(char) * (finish + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, finish + 1);
	return (str);
}

/* int	main()
{
	char	*str;

	str = ft_substr("test 555", 5, 3);
	printf("%s\n", str);
	free(str);
} */