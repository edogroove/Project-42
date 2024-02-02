/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:00:18 by enanni            #+#    #+#             */
/*   Updated: 2024/02/02 11:58:59 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* void	f(unsigned int i, char *str)
{
	if (str[i] == 'a')
	{
		str[i] = 'A';
	}
}

int	main()
{
	char	*str;

	str = "ciao";
	ft_striteri(str, &f);
	printf("%s", str);
} */