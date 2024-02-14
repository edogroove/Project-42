/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:49:41 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 20:01:20 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/* void	del(void *p)
{
	free(p);
}

int	main()
{
	int	*data = malloc(sizeof(int));
	int	*data1 = malloc(sizeof(int));
	int	*data2 = malloc(sizeof(int));
	*data = 10;
	*data1 = 20;
	*data2 = 30;

	t_list *list = ft_lstnew(data);
	t_list *list1 = ft_lstnew(data1);
	t_list *list2 = ft_lstnew(data2);

	list -> next = list1;
	list1 -> next = list2;
	list2 -> next = NULL;

	printf("%d\n", *(int *)(list -> content));
	printf("%d\n", *(int *)(list1 -> content));
	printf("%d\n\n", *(int *)(list2 -> content));
	ft_lstclear(&list1, &del);
	printf("%d\n", *(int *)(list -> content));
//	printf("%d\n", *(int *)(list1 -> content)); //segfault OK!
	free(list);
	free(data);
} */