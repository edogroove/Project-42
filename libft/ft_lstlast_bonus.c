/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:21:28 by enanni            #+#    #+#             */
/*   Updated: 2024/02/10 19:30:44 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	int		c;

	c = 0;
	i = ft_lstsize(lst);
	while (c < i - 1)
	{
		lst = lst -> next;
		c++;
	}
	return (lst);
}

/* int	main()
{
	t_list	*head;
	t_list	*mid;
	t_list	*end;
	t_list	*res;

	head = ft_lstnew("head");
	mid = ft_lstnew("mid");
	end = ft_lstnew("end");

	head -> next = mid;
	mid -> next = end;
	end -> next = NULL;
	
	printf("%s\n", (char *)head -> content);
	printf("%s\n", (char *)head -> next -> content);
	printf("%s\n\n", (char *)head -> next -> next -> content);

	res = ft_lstlast(head);
	printf("%s\n", (char *)res -> content);

	free(end);
	free(mid);
	free(head);
	return (0);
} */