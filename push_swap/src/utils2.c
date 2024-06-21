/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:27:59 by enanni            #+#    #+#             */
/*   Updated: 2024/06/21 10:50:35 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_the_needed(int min, int max, int size)
{
	int	i;

	if (min > (size / 2))
		min = min - size;
	if (max > (size / 2))
		max = max - size;
	i = ft_min_nbr(max, min);
	return (i);
}

int	ft_the_needed_a(t_list *stack_a, int cont, int size)
{
	t_list	*tmp;
	int		i;

	tmp = stack_a;
	i = ft_max_or_min(stack_a, cont, size);
	if (i != size + 1)
		return (ft_the_needed_b(i, size));
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (cont < stack_a->value && cont > tmp->value)
		return (0);
	i = 1;
	while (!(cont > stack_a->value && cont < (stack_a->next)->value))
	{
		stack_a = stack_a->next;
		i++;
	}
	return (ft_the_needed_b(i, size));
}

int	*ft_copy_cont(t_list *stack_a, int size)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *) malloc (sizeof(int) * size + 1);
	if (!arr)
		ft_display_exit_ps();
	while (stack_a != NULL)
	{
		arr[i++] = (stack_a)->value;
		stack_a = (stack_a)->next;
	}
	return (arr);
}

int	*ft_intcpy(int	*arr, int size)
{
	int	i;
	int	*cpy;

	i = 0;
	cpy = (int *) malloc (sizeof(int) * size);
	if (!arr || !cpy)
		ft_display_exit_ps();
	while (i < size)
	{
		cpy[i] = arr[i];
		i++;
	}
	return (cpy);
}
