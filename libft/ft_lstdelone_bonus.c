/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:23:01 by enanni            #+#    #+#             */
/*   Updated: 2024/02/12 17:20:29 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

void	delete_lstcontent(void *p)
{
	free(p);
}

/* 	int	main()
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

	printf("%d\n", *(int *)(list -> content));
	printf("%d\n", *(int *)(list1 -> content));
	printf("%d\n\n", *(int *)(list2 -> content));
	ft_lstdelone(list1, &delete_lstcontent);
	printf("%d\n", *(int *)(list -> content));
	printf("%d\n", *(int *)(list1 -> content));
	printf("%d\n", *(int *)(list2 -> content));
} */