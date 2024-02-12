/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:32:47 by enanni            #+#    #+#             */
/*   Updated: 2024/02/12 17:40:43 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/* void	f(void	*p)
{
	*(int *)p = 10;
}

int	main()
{
	int	*data = malloc(sizeof(int));
	int	*data1 = malloc(sizeof(int));
	int	*data2 = malloc(sizeof(int));

	t_list *list = ft_lstnew(data);
	t_list *list1 = ft_lstnew(data1);
	t_list *list2 = ft_lstnew(data2);

	list -> next = list1;
	list1 -> next = list2;
	list2 -> next = NULL;

	printf("%d\n", *(int *)(list -> content));
	printf("%d\n", *(int *)(list1 -> content));
	printf("%d\n\n", *(int *)(list2 -> content));
	ft_lstiter(list, f);
	printf("%d\n", *(int *)(list -> content));
	printf("%d\n", *(int *)(list1 -> content));
	printf("%d\n", *(int *)(list2 -> content));
} */