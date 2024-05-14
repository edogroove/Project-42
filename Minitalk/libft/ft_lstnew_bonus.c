/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:46:55 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 20:30:00 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	elem -> content = content;
	elem -> next = NULL;
	return (elem);
}

/* int	main()
{
	t_list *node;
	char *str = "Test 555";
	node = ft_lstnew(str);
	printf("%s\n", (char *)node -> content);
	free(node);
	return (0);
} */