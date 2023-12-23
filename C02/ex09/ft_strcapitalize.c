/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:19:36 by enanni            #+#    #+#             */
/*   Updated: 2023/11/28 18:38:12 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sel(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] -= 32;
			i++;
		}
		else if (i > 0 && str[c] >= 'A' && str[c] <= 'Z')
			str[c] += 32;
		else if ((i > 0 && str[c] == ' ') || sel(str[c]) == 1)
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

int main()
{

	char original[] =
	"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(original));
}