/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:46:55 by enanni            #+#    #+#             */
/*   Updated: 2024/02/07 20:40:42 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (0);
	elem -> content = content;
	elem -> next = NULL;
	return (elem);
}

/* int	main()
{
	t_list *elem;
	char *str = "Test 555";
	elem = ft_lstnew(str);
	printf("%s\n", elem -> content);
	return (0);
} */