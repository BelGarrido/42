/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:53 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:53 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	char_num;
	int		num;

	num = 0;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		char_num = n + 48;
		write (fd, &char_num, 1);
		return ;
	}
	num = n % 10;
	n = n / 10;
	char_num = num + 48;
	ft_putnbr_fd(n, fd);
	write (fd, &char_num, 1);
}

/*int	main(void)
{
	int	number;
	int fd = open("./prueba.txt", O_RDWR);
	number = -1256563;
	ft_putnbr_fd(number, fd);
}*/
