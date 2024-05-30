/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:30:12 by enanni            #+#    #+#             */
/*   Updated: 2024/05/30 15:16:35 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

int		main(int ac, char **av);
char	**av_one_arg(char **av);
char	**av_args(char **av);
int		have_duplicates(char **av);
int		have_duplicates_arr(char **av);
int		is_correct_zero(char **av);
int		is_correct_zero_arr(char **av);
int		arg_is_zero(char *av);
void	free_string_array(char **array);
int		initial_checks(char	**result);
int		initial_checks_2(char **av);
void	check_limits(char **result);
int		all_checks(int ac, char **av);
void	init_stack(t_list **stack, int ac, char **av);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*get_min(t_list **stack);
void	free_stack(t_list **stack);
int		check_sort(t_list **stack);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
t_list	*ra(t_list *stack_a);
t_list	*rb(t_list *stack_b);

#endif
