/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:26:38 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/15 14:49:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(uintptr_t x, int *count)
{
	uintptr_t	remainder;
	char		char_num;

	remainder = x % 16;
	x = x / 16;
	if (remainder > 9)
		char_num = (remainder - 9) + 96;
	else
		char_num = remainder + 48;
	if (x == 0)
	{
		if (remainder > 9)
		{
			char_num = (remainder - 9) + 96;
			ft_putchar_print(char_num, count);
		}
		else
		{
			char_num = remainder + 48;
			ft_putchar_print(char_num, count);
		}
		return ;
	}
	ft_puthex(x, count);
	ft_putchar_print(char_num, count);
}

void	ft_putptr_print(void *ptr, int *count)
{
	uintptr_t	raw_address;

	raw_address = (uintptr_t)ptr;
	if (ptr)
	{
		write (1, "0", 1);
		write (1, "x", 1);
		(*count) += 2;
		ft_puthex(raw_address, count);
	}
	else
	{
		write (1, "(nil)", 5);
		(*count) += 5;
	}
}

/* 
int main(void)
{
	char *text = "hola";
	int count = 0;
	ft_putptr_print(text, &count);
	printf("\n");
} */
