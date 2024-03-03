/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:43:23 by enanni            #+#    #+#             */
/*   Updated: 2024/03/03 08:50:58 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	ft_formats(char format, va_list args)
{
	if (format == '%')
		return (write(1, "%", 1));
	else if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (format == 's')
		return (prt_str(va_arg(args, char *)));
	else if (format == 'p')
		return (prt_ptr(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (prt_int(va_arg(args, int)));
	else if (format == 'u')
		return (prt_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (prt_hexa(va_arg(args, ssize_t), false));
	else if (format == 'X')
		return (prt_hexa(va_arg(args, ssize_t), true));
	return (0);
}

int	ft_printf(const char *format_input, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!format_input)
		return (0);
	i = 0;
	len = 0;
	va_start(args, format_input);
	while (format_input[i])
	{
		if (format_input[i] == '%')
		{
			i++;
			len += ft_formats(format_input[i], args);
		}
		else
			len += write(1, &format_input[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
