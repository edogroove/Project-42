/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:36:13 by enanni            #+#    #+#             */
/*   Updated: 2023/12/05 12:34:36 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	segno;
	int	ris;

	i = 0;
	segno = 1;
	ris = 0;
	while ((str[i] > 9 && str[i] < 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			segno *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ris = ris * 10 + (str[i] - '0');
		i++;
	}
	return (segno * ris);
}

int	main(void)
{
	char str[] = "---+-1234fff5";
	printf("%d", ft_atoi(str));
}