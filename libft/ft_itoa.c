/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:07 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:07 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char *ft_itoa(int n);
{
	char	char_num;
	int		num;
	char	*string_num = (char *)malloc(sizeof(char))
	num = 0;
	if (n == -2147483648)
	{
		//write (1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		//write (1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		char_num = n + 48;
		//write (1, &char_num, 1);
		return ;
	}
	num = n % 10;
	n = n / 10;
	char_num = num + 48;
	ft_itoa(n);
	//write (fd, &char_num, 1);
}

int	main(void)
{
	int	number;
	int fd = open("./prueba.txt", O_RDWR);
	number = -2147483648;
	ft_putnbr_fd(number, fd);
}
