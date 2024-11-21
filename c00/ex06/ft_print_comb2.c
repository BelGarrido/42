/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:43:43 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/04 13:21:14 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;

	num1 = 00;
	num2 = 01;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar ((num1 / 10) + 48);
			ft_putchar ((num1 % 10) + 48);
			write (1, " ", 1);
			ft_putchar ((num2 / 10) + 48);
			ft_putchar ((num2 % 10) + 48);
			if (!(num1 == 98 && num2 == 99))
			{
				ft_putchar (',');
			}
			num2++;
		}
		num2 = 1;
		num1++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
