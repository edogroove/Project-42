/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:43:55 by enanni            #+#    #+#             */
/*   Updated: 2024/03/26 10:47:40 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

int		ft_printf(const char *__format, ...);
int		ft_str(char const *str);
int		ft_ptr(void *ptr_addr);
int		ft_int(int n);
int		ft_unsigned(unsigned int nbr);
int		ft_hexa(unsigned int nbr, bool upper_case);

#endif