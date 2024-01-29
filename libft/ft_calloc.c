/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:56:47 by enanni            #+#    #+#             */
/*   Updated: 2024/01/29 23:53:00 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmeb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmeb * size);
	return (ptr);
}

/* int	main()
{
	char	*str;

	str = ft_calloc(3, 3);
	printf("%s", str);
} */