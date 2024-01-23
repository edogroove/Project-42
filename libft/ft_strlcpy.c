/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:25:58 by parallels         #+#    #+#             */
/*   Updated: 2024/01/23 22:26:17 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int	i;
    unsigned int	len;

    i = 0;
    len = 0;
    if (dest == NULL && src == NULL)
        return (0);
    while (src[len])
        len++;
    if (size == 0)
        return (len);
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    if (size != 0)
        dest[i] = '\0';
    return (len);
}