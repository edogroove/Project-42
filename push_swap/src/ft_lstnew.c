/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:46:55 by enanni            #+#    #+#             */
/*   Updated: 2024/05/07 15:46:57 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	elem -> value = value;
	elem -> index = -1;
	elem -> next = NULL;
	return (elem);
}

/* int	main()
{
	t_list *node;
	char *str = "Test 555";
	node = ft_lstnew(str);
	printf("%s\n", (char *)node -> value);
	free(node);
	return (0);
} */