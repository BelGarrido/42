/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:37:13 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/18 18:37:15 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] <= 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg = neg * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

/*int	main(void)
{
	char	*string = "+++++0---12345";
	
	printf("%i", ft_atoi(string));
}*/
