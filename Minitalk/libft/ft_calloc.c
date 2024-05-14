/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:56:47 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 19:00:23 by enanni           ###   ########.fr       */
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

/* int main()
{
    int *array;
    int i;

	i = 0;
    array = calloc(5, sizeof(int));
    if (array == NULL)
        return (1);
    printf("Valori:\n");
    while (i < 5)
	{
        printf("%d ", array[i]);
		i++;
    }
    printf("\n");
    free(array);
    return 0;
} */