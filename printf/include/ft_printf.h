/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:35:48 by enanni            #+#    #+#             */
/*   Updated: 2024/02/21 18:58:59 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent(void);

void	ft_putstr(char *str);
void	ft_put_ptr(intptr_t num);
int		ft_ptr_len(intptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);

#endif