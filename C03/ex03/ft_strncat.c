/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:19:49 by enanni            #+#    #+#             */
/*   Updated: 2023/11/30 16:11:19 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' && x < nb)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Ciao";
	char dest[] = "123";
	printf("%s",ft_strncat(dest, src, 2));
}*/
