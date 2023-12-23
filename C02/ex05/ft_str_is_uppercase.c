/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:22:45 by enanni            #+#    #+#             */
/*   Updated: 2023/11/27 17:31:28 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_uppercase("ABCDEFGHI"));
	printf("%d\n", ft_str_is_uppercase("ABCDEFdfgd"));
	printf("%d\n", ft_str_is_uppercase("ABCDE5654I"));
	printf("%d\n", ft_str_is_uppercase("456%^"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/
