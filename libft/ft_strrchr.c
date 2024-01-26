/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:12:01 by enanni            #+#    #+#             */
/*   Updated: 2024/01/26 09:49:09 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // NON FUNZIONA

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if ((char)c == s[j])
			i = j;
		j++;
	}
	if (i == 0)
		return (0);
	else
		return ((char *)&s[i]);
}

/* int	main()
{
	char s[] = "Ciao, mondo!";
    char c = '\0';
    char *p;

    p = ft_strrchr(s, c);
	printf("%s\n", p);
} */