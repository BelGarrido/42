/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:19:15 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/17 15:19:16 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(int n);

char	*ft_itoa(int n)
{
	int		len;
	char	*number;
	int		aux_num;
	int		modul_num;
	
	len = ft_get_len(n);
	number = (char *)malloc((len + 1)*sizeof(char));
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (n < 0)
	{
		//number[0] = '-';
		aux_num = -n;
	}
	else
		aux_num = n;
	while (len > 0)
	{
		if (n < 0 && len == 1)
		{
			number[0] = '-';
    		break;
		}
		modul_num = aux_num % 10;
		aux_num = aux_num / 10;
		number[len - 1] = modul_num + '0';
		len --;
	}
	return (number);

}
static int	ft_get_len(int n)
{
	int	count;
	
	count = 1;
	if (n < 0)
		count++;
	while (n / 10 != 0)
	{	
		n = n / 10;
		count++;
	}
	return (count);
}

int	main()
{
	int n = -123;
	printf("length: %i\n", ft_get_len(n));
	printf("result of itoa: %s", ft_itoa(n));
}
