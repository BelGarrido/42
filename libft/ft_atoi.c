/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:19:02 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 15:19:08 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int	i;
	int	neg;
	int	number;

	i = 0;
	neg = 1;
	number = 0;
	while (string[i] == ' ')
		i++;
	if (string [i] == '+' || string[i] == '-')
	{
		if (string[i] == '-')
		{
			neg = -neg;
		}
		i++;
	}
	while (string[i] >= '0' && string[i] <= '9')
	{
		number = number * 10 + string[i] - '0';
		i++;
	}
	return (number * neg);
}

/*int main(void)
{
	int	i;
	int	j;
	char	s[] = " --36- 53";
	i = ft_atoi(s);
	j = atoi(s);
	printf ("i = %d\n",i);
	printf ("j = %d\n",j);
}*/
