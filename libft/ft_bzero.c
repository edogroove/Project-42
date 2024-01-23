/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:48:01 by enanni            #+#    #+#             */
/*   Updated: 2024/01/23 15:31:05 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = '\0';
}

/* int main()
{
	char str1[10] = "Hello";
	char str2[10] = "World";
	char str3[10] = "123456789";
	
	// Test case 1: Zeroing out the entire string
	ft_bzero(str1, sizeof(str1));
	printf("str1 after ft_bzero: %s\n", str1); // Expected output: ""

	// Test case 2: Zeroing out a portion of the string
	ft_bzero(str2, 3);
	printf("str2 after ft_bzero: %s\n", str2); // Expected output: "Wor"

	// Test case 3: Zeroing out a string with numbers
	ft_bzero(str3, sizeof(str3));
	printf("str3 after ft_bzero: %s\n", str3); // Expected output: ""

	return 0;
} */