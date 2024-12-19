/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:19:15 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/19 16:53:17 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(long n);

char	*ft_itoa(int n)
{
	int			len;
	char		*number;
	long int	aux_num;

	len = ft_get_len(n);
	aux_num = n;
	number = (char *)malloc((len + 1) * sizeof(char));
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (aux_num < 0)
	{
		number[0] = '-';
		aux_num = aux_num * -1;
	}
	if (n == 0)
		number[0] = '0';
	while (aux_num > 0)
	{
		number[len - 1] = (aux_num % 10) + '0';
		aux_num = aux_num / 10;
		len --;
	}
	return (number);
}

static int	ft_get_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

/*int	main()
{
	//int n = -214748;
	long n = -2147483648;
	printf("length: %i\n", ft_get_len(n));
	printf("result of itoa: %s", ft_itoa(n));
}*/