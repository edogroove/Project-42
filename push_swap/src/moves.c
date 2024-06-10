/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:39 by enanni            #+#    #+#             */
/*   Updated: 2024/06/10 06:53:47 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list *stack_a)
{
	int	temp;

	temp = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = temp;
	write(1, "sa\n", 3);
}

void	sb(t_list *stack_b)
{
	int	temp;

	temp = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = temp;
	write(1, "sb\n", 3);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	int	temp1;
	int	temp2;

	temp1 = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = temp1;
	temp2 = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = temp2;
	write(1, "ss\n", 3);
}

t_list	*ra(t_list *stack_a)
{
	t_list	*temp;
	t_list	*head;

	temp = stack_a;
	head = stack_a->next;
	while (stack_a->next != NULL)
		stack_a = stack_a->next;
	stack_a->next = temp;
	temp->next = NULL;
	write(1, "ra\n", 3);
	return (head);
}

t_list	*rb(t_list *stack_b)
{
	t_list	*temp;
	t_list	*head;

	temp = stack_b;
	head = stack_b->next;
	while (stack_b->next != NULL)
		stack_b = stack_b->next;
	stack_b->next = temp;
	temp->next = NULL;
	write(1, "rb\n", 3);
	return (head);
}
