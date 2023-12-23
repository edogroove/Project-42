/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:51:38 by enanni            #+#    #+#             */
/*   Updated: 2023/11/29 14:59:27 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	printf("%d\n", ft_strcmp("Ciao", "Ciao"));
	printf("%d\n", ft_strcmp("Cizzz", "Ci"));
	printf("%d\n", ft_strcmp("Ci", "Ciao"));
}