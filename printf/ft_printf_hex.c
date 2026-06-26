/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tate <tate@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 21:40:22 by tate              #+#    #+#             */
/*   Updated: 2026/06/24 22:00:23 by tate             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	int		count;
	char	*base;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_print_hex(n / 16, format);
	count += write (1, &base[n % 16], 1);
	return (count);
}

static int	ft_print_hex_ptr(unsigned long long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_print_hex_ptr(n / 16);
	count += write (1, &"0123456789abcdef"[n % 16], 1);
	return (count);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count += write (1, "0x", 2);
	count += ft_print_hex_ptr(ptr);
	return (count);
}
