/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:18:45 by enanni            #+#    #+#             */
/*   Updated: 2024/05/09 12:42:26 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	initStack(t_list **stack, int ac, char **av)
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
		free(new);
		i++;
	}
	free(stack);
}

int	main(int ac, char **av)
{
	t_list **stack_a;
	//t_list **stack_b;

	all_checks(ac, av);
	stack_a = (t_list **)malloc(sizeof(t_list));
	//stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	//*stack_b = NULL;
	initStack(stack_a, ac, av);
	return (0);
}
