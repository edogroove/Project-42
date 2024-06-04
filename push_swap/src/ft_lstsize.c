/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:37:38 by enanni            #+#    #+#             */
/*   Updated: 2024/06/04 18:19:37 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst -> next;
	}
	return (size);
}

/* int	main()
{
	t_list *head;

	head = ft_lstnew(NULL);
	head -> next = ft_lstnew(NULL);
	printf("%d\n", ft_lstsize(head));
	free(head -> next);
	free(head);
} */