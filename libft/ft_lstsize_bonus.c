/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:37:38 by enanni            #+#    #+#             */
/*   Updated: 2024/02/09 19:02:57 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
} */