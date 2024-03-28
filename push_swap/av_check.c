/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   av_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:09:25 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/27 19:00:22 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	av_empty(char **av, int j)
{
	if (av[j][0] == '\0')
	{
		write (2, "Error\n", 6);
		return (1);
	}
	return (0);
}

static int	check_space(char **av)
{
	if (av_empty(av, 1) == 1)
		return (1);
	if (!av[1][1] && av[1][0] == ' ')
	{
		write (2, "Error\n", 6);
		return (1);
	}
	return (0);
}

static int	check_moreoperator(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (ft_isoperator(av[j][i]) == 1)
			{
				i++;
				if (ft_isdigit(av[j][i]) == 0)
				{
					write (2, "Error\n", 6);
					return (1);
				}
			}
			i++;
		}
		j++;
	}
	return (0);
}

char	**av_one_arg(char **av)
{
	int	i;

	i = 0;
	if (check_space(av) == 1)
		return (NULL);
	while (av[1][i])
	{
		if (ft_isoperator(av[1][i]) == 1)
		{
			i++;
			if (ft_isdigit(av[1][i]) == 0)
			{
				write (2, "Error\n", 6);
				return (NULL);
			}
		}
		if ((ft_isdigit(av[1][i]) == 0) && (av[1][i] != 32))
		{
			write (2, "Error\n", 6);
			return (NULL);
		}
		i++;
	}
	return (ft_split(av[1], ' '));
}

char	**av_args(char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (av[j])
	{
		if (av_empty(av, j) == 1)
			return (NULL);
		while (av[j][i])
		{
			if (ft_isdigit(av[j][i]) == 0 && ft_isoperator(av[j][i]) == 0)
			{
				write(2, "Error\n", 6);
				return (NULL);
			}
			if ((check_moreoperator(av) == 1) || (have_duplicates(av) == 1))
				return (NULL);
			i++;
		}
		j++;
		i = 0;
	}
	return (av + 1);
}
