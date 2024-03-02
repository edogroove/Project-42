/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:35:48 by enanni            #+#    #+#             */
/*   Updated: 2024/02/29 14:01:39 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const char *__format, ...);
int		prt_str(char const *str);
int		prt_ptr(void *ptr_addr);
int		prt_int(int n);
int		prt_unsigned(unsigned int nbr);
int		prt_hexa(unsigned int nbr, bool upper_case);

#endif