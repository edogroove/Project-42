/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:55:46 by enanni            #+#    #+#             */
/*   Updated: 2024/10/01 18:02:48 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_best_nbr_b(t_list **stack_b, int size_b, t_list **stack_a, int size_a)
{
	int		*arr_b;
	int		*arr_a;
	t_list	*tmp_b;
	int		i;

	i = -1;
	tmp_b = *stack_b;
	arr_a = (int *) malloc (sizeof(int) * size_b);
	arr_b = (int *) malloc (sizeof(int) * size_b);
	if (!arr_b || !arr_a)
		ft_display_exit_ps();
	while (++i < size_b)
		arr_b[i] = ft_the_needed_b(i, size_b);
	i = -1;
	while (++i < size_b && tmp_b != NULL)
	{
		arr_a[i] = ft_the_needed_a(*stack_a, tmp_b->value, size_a);
		tmp_b = tmp_b->next;
	}
	i = ft_best_comb(ft_intcpy(arr_a, size_b),
			ft_intcpy(arr_b, size_b), size_b);
	i = ft_move_a(arr_a[i], arr_b[i], stack_a, stack_b);
	free(arr_a);
	free(arr_b);
	return (i);
}

int	ft_best_nbr_a(t_list *stack_a, int size, int *arr, int max)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (stack_a != NULL)
	{
		i = 0;
		while (stack_a->value != arr[i] && i < max)
		{
			if (i == max - 1)
				return (pos);
			i++;
		}
		stack_a = stack_a->next;
		pos++;
	}
	size = -1;
	return (size);
}

void	free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*temp;

	head = *stack;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(stack);
}

int	*ft_lis_util_helper(int max)
{
	int	*val;

	val = (int *) ft_calloc (max, sizeof(int));
	if (!val)
		ft_display_exit_ps();
	val[max - 1] = 2147483647;
	return (val);
}

int	*ft_lis_util(int *dst, int *arr, int max, int size)
{
	int	i;
	int	j;
	int	*val;
	int	x;

	j = size;
	val = ft_lis_util_helper(max);
	while (max-- >= 1)
	{
		i = j;
		x = 0;
		while (--i >= 0)
		{
			if (arr[i] == max && ((dst[i] < val[max])
					|| val[max - 1] == 2147483647)
				&& ((dst[i] > val[max - 1]) || (x == 0)))
			{
				val[max - 1] = dst[i];
				j = i;
				x = 1;
			}
		}
	}
	free(arr);
	return (val);
}
