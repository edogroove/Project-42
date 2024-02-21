/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:37:24 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 20:50:41 by enanni           ###   ########.fr       */
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
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* int main()
{
    char str1[] = "ciao";
    char str2[] = "zzzz sono edo";
	
    ft_memmove(str2, str1, 4);
	printf("%s\n", str2);

	memmove(str2, str1, 4);
    printf("%s\n", str2);
    return 0;
} */