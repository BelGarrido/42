/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:17:22 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/15 14:01:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexlow_print(unsigned int x, int *count)
{
	unsigned int	remainder;
	char			char_num;

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
	ft_puthexlow_print(x, count);
	ft_putchar_print(char_num, count);
}

/* int	main(void)
{
	unsigned int number = 1111;
	int count = 0;
	ft_puthexlow_print(number, &count);
	printf("\n");
	//printf("hexadecimal number: %x\n", number);
	printf("%d", count);
	printf("\n");
} */