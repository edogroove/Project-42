/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:21:28 by enanni            #+#    #+#             */
/*   Updated: 2024/02/10 07:47:28 by enanni           ###   ########.fr       */
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
	t_list	*end;

	head = ft_lstnew("Ciao");
	end = ft_lstnew("end");

	head -> next = end;
	
	printf("%s\n", (char *)head -> content);
	printf("%s\n\n", (char *)head -> next -> content);

	ft_lstlast(end);

	printf("%s\n", (char *)head -> content);
	free(head);
	free(head -> next);
	return (0);
} */