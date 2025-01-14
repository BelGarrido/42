/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:53 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:53 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_print(int n, int *count)
{
	char	char_num;
	int		num;

	num = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		(*count) = (*count) + 11;
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		(*count)++;
		n = -n;
	}
	if (n < 10)
	{
		char_num = n + 48;
		write (1, &char_num, 1);
		(*count)++;
		return ;
	}
	num = n % 10;
	n = n / 10;
	char_num = num + 48;
	ft_putnbr_print(n, count);
	(*count)++;
	write (1, &char_num, 1);
}

/* int	main(void)
{
	int	number;
	number = -1256563;
	int count = 0;
	ft_putnbr_print(number, &count);
	printf ("\n");
	printf ("%d", count);
	printf ("\n");
} */
