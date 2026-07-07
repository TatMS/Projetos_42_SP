/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatmarti <tatmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:36:59 by tatmarti          #+#    #+#             */
/*   Updated: 2026/07/02 17:08:37 by tatmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (format == 's')
		count += ft_print_string(va_arg(args, char *));
	else if (format == 'p')
		count += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		count += ft_print_int(va_arg(args, int));
	else if (format == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += ft_check_format(format[i], args);
		}
		else if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
