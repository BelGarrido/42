/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:02:21 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 15:02:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_putuint_print(unsigned int n, int *count)
{
	char			char_num;
	unsigned int	num;

	num = 0;
	if ((int)n == -2147483648)
	{
		write (1, "2147483648", 10);
		(*count) = (*count) + 10;
		return ;
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
	ft_putuint_print(n, count);
	(*count)++;
	write (1, &char_num, 1);
}

/* int	main(void)
{
	int	number;
	number = -1;
	int count = 0;
	ft_putuint_print(number, &count);
	printf ("\n");
	printf ("%d", count);
	printf ("\n");
} */