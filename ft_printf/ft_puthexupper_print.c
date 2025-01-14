/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:17:22 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/14 14:40:40 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexupper_print(unsigned int x, int *count)
{
	int		remainder;
	char	char_num;

	remainder = x % 16;
	x = x /16;
	if (remainder > 9)
		char_num = (remainder - 9) + 64;
	else
		char_num = remainder + 48;
	if (x == 0)
	{	
		if (remainder > 9)
		{
			char_num = (remainder - 9) + 64;
			write(1, &char_num, 1);
		}
		else
		{
			char_num = remainder + 48;
			write(1, &char_num, 1);
		}
		(*count)++;
		return ;
	}
	ft_puthexupper_print(x, count);
	(*count)++;
	write (1, &char_num, 1);
}

/* int	main(void)
{
	unsigned int number = 960;
	int count = 0;
	ft_puthexupper_print(960, &count);
	printf("\n");
	//printf("hexadecimal number: %x\n", number);
	printf("%d", count);
} */