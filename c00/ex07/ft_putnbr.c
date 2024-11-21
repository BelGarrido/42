/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:02:59 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/17 17:03:09 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	char_num;
	int		n;

	n = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		char_num = nb + 48;
		write (1, &char_num, 1);
		return ;
	}
	n = nb % 10;
	nb = nb / 10;
	char_num = n + 48;
	ft_putnbr(nb);
	write (1, &char_num, 1);
}

/*int	main(void)
{
	int	number;

	number = 0;
	ft_putnbr(number);
}*/
