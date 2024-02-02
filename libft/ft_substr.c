/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:45:50 by enanni            #+#    #+#             */
/*   Updated: 2024/02/02 12:16:42 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	str = (char *)malloc(sizeof(char) * (finish + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, finish + 1);
	return (str);
}

/* int	main()
{
//	char	*str;
	char	*str2;

//	str = "01234";
	str2 = ft_substr("", 1, 1);
	printf("%s\n", str2);
} */