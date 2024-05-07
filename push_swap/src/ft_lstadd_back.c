/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:32:14 by enanni            #+#    #+#             */
/*   Updated: 2024/05/07 12:46:06 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	t_list	*tmp;

	head = ft_lstnew("head");
	mid = ft_lstnew("mid");
	end = ft_lstnew("end");
	new = ft_lstnew("new");

	head -> next = mid;
	mid -> next = end;
	end -> next = NULL;
	
	ft_lstadd_back(&head, new);
	
	tmp = &*head;

	while(head != NULL)
	{
		printf("%s\n", (char *)head -> content);
		head = head -> next;
	}
	free(tmp);
	free(mid);
	free(end);
	free(new);
} */