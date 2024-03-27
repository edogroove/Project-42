/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:44:19 by enanni            #+#    #+#             */
/*   Updated: 2024/02/14 19:33:07 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/* int	main()
{
	t_list	*head = ft_lstnew("mondo");
	t_list	*node = ft_lstnew("ciao");
	t_list	*tmp;

	printf("%s\n", (char *)head -> content);

	tmp = &*head;
	ft_lstadd_front(&head, node);
	
	printf("%s\t%s\n", (char *)head -> content,
	(char *)head -> next -> content);

	free(tmp);
	free(node);
	return (0);
} */