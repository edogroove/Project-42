/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:33:17 by enanni            #+#    #+#             */
/*   Updated: 2023/11/27 17:41:10 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_printable("f8787g"));
	printf("%d\n", ft_str_is_printable("$%^%$^"));
	printf("%d\n", ft_str_is_printable("\n\t"));
	printf("%d\n", ft_str_is_printable(""));
}*/
