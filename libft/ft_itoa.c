/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:50:39 by enanni            #+#    #+#             */
/*   Updated: 2024/02/02 10:26:42 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long int	num;
	int				i;

	num = (long long int)n;
	i = ft_len(num);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (0);
	str[i--] = '\0';
	if (num == 0)
		str[0] = 48;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[i--] = 48 + (num % 10);
		num /= 10;
	}
	return (str);
}

/* int	main()
{
	char	*res;
	res = ft_itoa(0);
	printf("%s\n", res);
} */