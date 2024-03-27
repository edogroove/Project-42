/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:11:52 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 21:05:50 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

/* int	main()
{
	char s[] = "Ciao, mondo!";
    char c = 'n';
    char *p;

    p = ft_strchr(s, c);
	printf("%s\n", p);
} */