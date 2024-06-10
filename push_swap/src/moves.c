/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:39 by enanni            #+#    #+#             */
/*   Updated: 2024/06/10 07:43:30 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack_a;
	tmp2 = tmp->next;
	*stack_a = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	write(1, "sa\n", 3);
	return ;
}

void	sb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack_b;
	tmp2 = tmp->next;
	*stack_b = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	write(1, "sb\n", 3);
	return ;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack_a;
	tmp2 = tmp->next;
	*stack_a = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	tmp = NULL;
	tmp2 = NULL;
	tmp = *stack_b;
	tmp2 = tmp->next;
	*stack_b = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	write(1, "ss\n", 3);
	return ;
}

void	ra(t_list **stack_a)
{
	t_list	*last;
	t_list	*first;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last = *stack_a;
	first = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
	return ;
}

void	rb(t_list **stack_b)
{
	t_list	*last;
	t_list	*first;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last = *stack_b;
	first = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
	return ;
}
