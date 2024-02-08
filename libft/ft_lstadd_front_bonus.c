/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:44:19 by enanni            #+#    #+#             */
/*   Updated: 2024/02/08 21:24:59 by enanni           ###   ########.fr       */
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
	t_list *elem;
	char	*str = "Test 555";

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return(1);
	elem -> content = str;
	elem -> next = NULL;
	ft_lstadd_front(&elem, elem);
	printf("%s\n", (char *)elem -> content);
	free(elem);
	return (0);
} */