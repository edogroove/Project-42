/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:43:23 by enanni            #+#    #+#             */
/*   Updated: 2024/04/04 15:35:47 by enanni           ###   ########.fr       */
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
		return (ft_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_ptr(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_int(va_arg(args, int)));
	else if (format == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_hexa(va_arg(args, ssize_t), false));
	else if (format == 'X')
		return (ft_hexa(va_arg(args, ssize_t), true));
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

/* int	main(void)
{
	char			*str;
	int				n;
	unsigned int	u;
	int				hex;
	char			c;

	c = 'c';
	str = "test";
	n = -2147483648;
	u = 10;
	hex = 1000;

	printf("N:%d\n", ft_printf("%%c: %c\n", c));
	printf("N:%d\n", printf("%%c: %c\n", c));

	ft_printf("\n\n");

	printf("N:%d\n", ft_printf("%%s: %s\n", str));
	printf("N:%d\n", printf("%%s: %s\n", str));

	ft_printf("\n\n");

	printf("N:%d\n", ft_printf("%%p: %p\n", str));
	printf("N:%d\n", printf("%%p: %p\n", str));

	ft_printf("\n\n");

	printf("N:%d\n", ft_printf("%%d: %d\n", n));
	printf("N:%d\n", printf("%%d: %d\n", n));

	ft_printf("\n\n");

	printf("N:%d\n", ft_printf("%%i: %i\n", n));
	printf("N:%d\n", printf("%%i: %i\n", n));

	ft_printf("\n\n");

	printf("N:%d\n", ft_printf("%%u: %u\n", u));
	printf("N:%d\n", printf("%%u: %u\n", u));

	ft_printf("\n\n");

	printf("N:%d\n", ft_printf("%%x: %x\n", hex));
	printf("N:%d\n", printf("%%x: %x\n", hex));

	ft_printf("\n\n");

	printf("N:%d\n", ft_printf("%%X: %X\n", hex));
	printf("N:%d\n", printf("%%X: %X\n", hex));

	return (0);
}
  */