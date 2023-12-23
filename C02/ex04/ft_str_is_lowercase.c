/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:05:38 by enanni            #+#    #+#             */
/*   Updated: 2023/11/27 17:20:48 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_lowercase("abcdefg"));
	printf("%d\n", ft_str_is_lowercase("abcdDTG"));
	printf("%d\n", ft_str_is_lowercase("ab456546"));
	printf("%d\n", ft_str_is_lowercase("546546"));
	printf("%d\n", ft_str_is_lowercase("abc^^defg"));
}*/
