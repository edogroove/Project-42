/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:23:01 by enanni            #+#    #+#             */
/*   Updated: 2024/02/12 15:09:19 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(*del)(lst -> content);
	free(lst);
}

void	delete_lstcontent(void *p)
{
	// ?????????????
}

int	main()
{
	t_list	*head;
	t_list	*mid;
	t_list	*end;

	head = ft_lstnew("head");
	mid = ft_lstnew("mid");
	end = ft_lstnew("end");

	head -> next = mid;
	mid -> next = end;
	end -> next = NULL;

	ft_lstdelone(mid, delete_lstcontent);

	while (head != NULL)
	{
		printf("%s", (char *)head -> content);
		head = head -> next;
	}
}