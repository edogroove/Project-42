/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 07:53:24 by enanni            #+#    #+#             */
/*   Updated: 2024/01/23 16:07:05 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/* int main()
{
    char str[10];

    ft_memset(str, 'A', 5);
    printf("Test case 1: %s\n", str);

    ft_memset(str, 'B', 10);
    printf("Test case 2: %s\n", str);

    ft_memset(str, '\0', 3);
    printf("Test case 3: %s\n", str);

    ft_memset(str, 'C', 0);
    printf("Test case 4: %s\n", str);

    return 0;
} */