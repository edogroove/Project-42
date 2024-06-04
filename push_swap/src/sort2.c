/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:43:40 by enanni            #+#    #+#             */
/*   Updated: 2024/06/04 19:42:30 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_move_a(int a, int b, t_list **stack_a, t_list **stack_b)
{
	while (a < 0 && b < 0)
	{
		rrr(stack_a, stack_b);
		a++;
		b++;
	}
	while (a > 0 && b > 0)
	{
		rr(stack_a, stack_b);
		a--;
		b--;
	}
	if (a < 0)
		while (a++ < 0)
			rra(stack_a);
	else if (a > 0)
		while (a-- > 0)
			ra(*stack_a);
	return (b);
}

int		ft_the_needed_b(int max, int size)
{
	if (max > (size / 2))
		max = max - size;
	return (max);
}

void	ft_move_to_b(t_list **stack_a, t_list **stack_b, int *arr, int max)
{
	int	i;
	int	size_a;

	size_a = ft_lstsize(*stack_a);
	i = ft_best_nbr_a(*stack_a, size_a, arr, max);
	while (i != -1)
	{
		if (i > 0)
		{
			while (i-- > 0)
				ra(*stack_a);
		}
		pb(stack_a, stack_b);
		i = ft_best_nbr_a(*stack_a, --size_a, arr, max);
	}
}

void	ft_move_to_a(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	size_a;
	int	size_b;

	i = 0;
	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	while (*stack_b != NULL)
	{
		i = ft_best_nbr_b(stack_b, size_b, stack_a, size_a);
		if (i < 0)
			while (i++ < 0)
				rrb(stack_b);
		else if (i > 0)
			while (i-- > 0)
				rb(*stack_b);
		pa(stack_b, stack_a);
		size_a++;
		size_b--;
	}
}
