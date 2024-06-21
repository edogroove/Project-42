/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:24:54 by enanni            #+#    #+#             */
/*   Updated: 2024/06/21 10:54:19 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_two(t_list **stack_a)
{
	int		i;
	int		j;
	t_list	*tmp;

	tmp = NULL;
	i = 0;
	j = 0;
	tmp = *stack_a;
	i = tmp->value;
	tmp = tmp->next;
	j = tmp->value;
	if (i > j)
		sa(stack_a);
}

void	ft_sort_three(t_list **stack_a)
{
	int		i;
	int		j;
	int		x;
	t_list	*tmp;

	tmp = NULL;
	i = 0;
	j = 0;
	x = 0;
	while (!(i < j && j < x && x > i))
	{
		tmp = *stack_a;
		i = tmp->value;
		tmp = tmp->next;
		j = tmp->value;
		tmp = tmp->next;
		x = tmp->value;
		if ((i > j && j < x && x > i)
			|| (i > j && j > x && x < i) || (i < j && j > x && x > i))
			sa(stack_a);
		if (i > j && j < x && x < i)
			ra(stack_a);
		if (i < j && j > x && x < i)
			rra(stack_a);
	}
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 2;
	while (i-- > 0)
		pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_move_to_a(stack_a, stack_b);
	ft_search_min(stack_a, ft_lstsize(*stack_a));
}

int	*ft_list_to_array(t_list *stack_a, int size)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc(sizeof(int) * size + 1);
	if (!arr)
		ft_display_exit_ps();
	while (stack_a != NULL)
	{
		arr[i++] = (stack_a)->value;
		stack_a = (stack_a)->next;
	}
	return (arr);
}

int	*ft_lis(int *dst, int size, int *max)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	j = -1;
	arr = (int *) malloc (sizeof(int) * size);
	if (!arr)
		ft_display_exit_ps();
	while (i < size)
		arr[i++] = 1;
	while (++j < size)
	{
		i = j - 1;
		while (++i < size)
		{
			if (dst[j] < dst[i] && arr[j] == arr[i])
			{
				arr[i] += 1;
				if (arr[i] > *max)
					*max = arr[i];
			}
		}
	}
	return (ft_lis_util(dst, arr, *max + 1, size));
}
