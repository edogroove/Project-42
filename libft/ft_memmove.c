/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:15:39 by enanni            #+#    #+#             */
/*   Updated: 2024/01/23 18:00:53 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n--)
			*((unsigned char *)(dest + n)) = *((unsigned char *)(src + n));
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "ciao merdaaaaaaaaaaaaaaaaaa";
    ft_memmove(str2, str1, 1);
	printf("%s\n", str2);
	memmove(str2, str1, 1);
    printf("%s\n", str2);
    return 0;
} */