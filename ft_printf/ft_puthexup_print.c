/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:17:22 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/14 14:40:40 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexup_print(unsigned int x, int *count)
{
	unsigned int	remainder;
	char			char_num;

	remainder = x % 16;
	x = x / 16;
	if (remainder > 9)
		char_num = (remainder - 9) + 64;
	else
		char_num = remainder + 48;
	if (x == 0)
	{
		if (remainder > 9)
		{
			char_num = (remainder - 9) + 64;
			ft_putchar_print(char_num, count);
		}
		else
		{
			char_num = remainder + 48;
			ft_putchar_print(char_num, count);
		}
		return ;
	}
	ft_puthexup_print(x, count);
	ft_putchar_print(char_num, count);
}

/* int	main(void)
{
	unsigned int number = 10;
	int count = 0;
	ft_puthexup_print(9223372036854775807LL, &count);
	printf("\n");
	//printf("hexadecimal number: %x\n", number);
	printf("%d", count);
	printf("\n");
} */