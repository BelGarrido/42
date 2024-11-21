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

/*void	ft_print_comb(void);*/

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/

void	ft_print_comb(void)
{
	char	posicion1;
	char	posicion2;
	char	posicion3;

	posicion1 = 48;
	while (posicion1 <= 55)
	{
		posicion2 = posicion1 + 1;
		while (posicion2 <= 56)
		{
			posicion3 = posicion2 + 1;
			while (posicion3 <= 57)
			{
				write (1, &posicion1, 1);
				write (1, &posicion2, 1);
				write (1, &posicion3, 1);
				if (posicion1 < '7')
					write (1, ", ", 1);
				posicion3++;
			}
			posicion2++;
		}
		posicion1++;
	}
}
