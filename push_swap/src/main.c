/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:18:45 by enanni            #+#    #+#             */
/*   Updated: 2024/06/10 08:26:37 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_search_min(t_list **stack_a, int size)
{
	int		pos;
	int		pos_min;
	int		min;
	t_list	*tmp;

	pos_min = 0;
	pos = 0;
	tmp = *stack_a;
	min = tmp->value;
	while (pos < size)
	{
		if (min > tmp->value)
		{
			min = tmp->value;
			pos_min = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	tmp = NULL;
	pos = ft_the_needed_b(pos_min, size);
	ft_move_a(pos, 0, stack_a, &tmp);
}

void	ft_sort(t_list **stack_a, t_list **stack_b, int size)
{
	int	*dst;
	int	*arr;
	int	i;

	i = 0;
	if (size == 3)
	{
		ft_sort_three(stack_a);
		return ;
	}
	if (size == 5)
	{
		ft_sort_five(stack_a, stack_b);
		return ;
	}
	dst = ft_list_to_array(*stack_a, size);
	arr = ft_lis(dst, size, &i);
	ft_move_to_b(stack_a, stack_b, arr, i);
	ft_move_to_a(stack_a, stack_b);
	ft_search_min(stack_a, size);
	free (dst);
	free (arr);
}

int		check_sort(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	init_stack(t_list **stack, int ac, char **av)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	if (ac == 2)
		free_string_array(args);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;
	int		size;

	all_checks(ac, av);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, ac, av);
	if (check_sort(stack_a) == 1)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	size = ft_lstsize(*stack_a);
	ft_sort(stack_a, stack_b, size);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
