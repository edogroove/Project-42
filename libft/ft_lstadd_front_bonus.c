/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:44:19 by enanni            #+#    #+#             */
/*   Updated: 2024/02/09 19:02:18 by enanni           ###   ########.fr       */
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
	t_list	*head = ft_lstnew("ciao");
	printf("%s\n", (char *)head -> content);
	ft_lstadd_front(&head, ft_lstnew("mondo"));
	printf("%s\t%s\n", (char *)head -> content,
	(char *)head -> next -> content);
	return (0);
} */