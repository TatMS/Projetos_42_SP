/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tate <tate@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 22:22:55 by tate              #+#    #+#             */
/*   Updated: 2026/06/24 23:12:36 by tate             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	count1;
	int	count2;

	count1 = ft_printf("Char: %c | String: %s\n", 'A', "Teste 42");
	count2 = printf("Char: %c | String: %s\n", 'A', "Teste 42");
	count1 += ft_printf("Int: %d | Hex: %x | Pointer: %p\n", 42, 42, &count1);
	count2 += printf("Int: %d | Hex: %x | Pointer: %p\n", 42, 42, &count1);
	count1 += ft_printf("Porcents: %%\n");
	count2 += printf("Porcents: %%\n");
	printf("\n --- Resultado (Retorno da função) ---\n");
	printf("Seu ft_print retornou: %d\n", count1);
	printf("O printf original retornou: %d\n", count2);
	return (0);
}
