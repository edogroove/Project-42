/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits_ps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:21:48 by enanni            #+#    #+#             */
/*   Updated: 2024/03/28 19:50:54 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_limits_ps(long long n, int sign)
{
	if (sign == 1)
	{
		if (n > INT_MAX)
		{
			write (2, "Error\n", 6);
			exit (1);
		}
	}
	if (sign == -1)
	{
		if (n < INT_MIN)
		{
			write (2, "Error\n", 6);
			exit (1);
		}
	}
}
