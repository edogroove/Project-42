/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:12:01 by enanni            #+#    #+#             */
/*   Updated: 2024/01/26 14:54:33 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // NON FUNZIONA

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/* int	main()
{
	char s[] = "abbbbbbbb";
    char c = 'a';
    char *p;

    p = ft_strrchr(s, c);
	printf("%s\n", p);
} */