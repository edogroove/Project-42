/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:39 by enanni            #+#    #+#             */
/*   Updated: 2024/05/24 12:39:40 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list *stack)
{
	int	temp;

	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list *stack)
{
	int	temp;

	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
	ft_putstr_fd("sb\n", 1);
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
	ft_putstr_fd("ss\n", 1);
}
