/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:39 by enanni            #+#    #+#             */
/*   Updated: 2024/05/24 12:49:18 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list *stack)
{
	int	temp;

	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
	write(1, "sa\n", 3);
}

void	sb(t_list *stack)
{
	int	temp;

	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
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
