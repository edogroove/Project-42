/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:46:55 by enanni            #+#    #+#             */
/*   Updated: 2024/05/03 17:01:56 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int num)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	elem -> content = num;
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