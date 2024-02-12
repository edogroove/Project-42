/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:00:18 by enanni            #+#    #+#             */
/*   Updated: 2024/02/12 14:46:14 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* void print_index_and_char(unsigned int index, char *c)
{
	printf("Index: %d, Char: %c\n", index, *c);
}

int main()
{
	char str1[] = "Test 555";
	
	ft_striteri(str1, print_index_and_char);
} */