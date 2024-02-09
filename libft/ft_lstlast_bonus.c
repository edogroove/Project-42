/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:21:28 by enanni            #+#    #+#             */
/*   Updated: 2024/02/09 19:28:19 by enanni           ###   ########.fr       */
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

int	main()
{
	t_list	*head;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*lastnode;

	head = ft_lstnew("Ciao");
	nodo3 = ft_lstnew("pippo");
	nodo2 = ft_lstnew("provino");
	head -> next = nodo2;
	nodo2 -> next = nodo3;

	
	
	printf("%s\n", (char *)head -> content);
	printf("%s\n\n", (char *)head -> next -> content);

	lastnode = ft_lstlast(head);

	printf("%s\n", (char *)lastnode -> content);
	return (0);
}