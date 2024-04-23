/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:30:12 by enanni            #+#    #+#             */
/*   Updated: 2024/04/23 23:24:26 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>

typedef struct stack
{
	int				value;
	struct stack	*next;
	struct stack	*prev;
}	t_stackNode;

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

#endif
