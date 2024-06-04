/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:30:12 by enanni            #+#    #+#             */
/*   Updated: 2024/06/04 19:43:37 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

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
void	free_stack(t_list **stack);
int		check_sort(t_list **stack);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	ft_sort(t_list **stack_a, t_list **stack_b, int size);
void	ft_sort_three(t_list **stack_a);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
int		*ft_list_to_array(t_list *stack_a, int size);
int		*ft_lis(int *dst, int size, int *max);
void	ft_move_to_b(t_list **stack_a, t_list **stack_b, int *arr, int max);
void	ft_move_to_a(t_list **stack_a, t_list **stack_b);
void	ft_search_min(t_list **stack_a, int size);
int		ft_the_needed_b(int max, int size);
int		ft_move_a(int a, int b, t_list **stack_a, t_list **stack_b);
t_list	*ra(t_list *stack_a);
t_list	*rb(t_list *stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
int		*ft_lis_util(int *dst, int *arr, int max, int size);
int		*ft_lis_util_helper(int max);
int		ft_best_nbr_a(t_list *stack_a, int size, int *arr, int max);
int		ft_best_nbr_b(t_list **stack_b, int size_b, t_list **stack_a, int size_a);
int		ft_the_needed(int min, int max, int size);
int		ft_the_needed_a(t_list *stack_a, int cont, int size);
int		*ft_copy_cont(t_list *stack_a, int size);
int		*ft_intcpy(int	*arr, int size);
int		ft_best_comb(int *arr_a, int *arr_b, int size);
int		ft_min_nbr(int a, int b);
int		ft_max_or_min(t_list *stack_a, int cont, int size);
int		return_max_or_min(int cont, int *max_n_min, int size);
int		ft_max_nbr(int a, int b);
int		ft_best_comb_helper(int *arr_a, int *arr_b, int *tmp, int size);

#endif
