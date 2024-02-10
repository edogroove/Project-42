/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:32:14 by enanni            #+#    #+#             */
/*   Updated: 2024/02/10 20:12:56 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp -> next)
		temp = temp -> next;
	temp -> next = new;
}

/* int	main()
{
	t_list	*head;
	t_list	*mid;
	t_list	*end;
	t_list	*new;

	head = ft_lstnew("head");
	mid = ft_lstnew("mid");
	end = ft_lstnew("end");

	head -> next = mid;
	mid -> next = end;
	end -> next = NULL;
	
	ft_lstadd_back(&head, new);
	
	while(head -> next != NULL)
	{
		printf("%p", &head);
	}
} */