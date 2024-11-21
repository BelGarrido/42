/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:39:58 by anagarri          #+#    #+#             */
/*   Updated: 2024/10/31 18:46:46 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	symbol;

	if (n < 0)
	{
		symbol = 'N';
	}
	else
	{
		symbol = 'P';
	}
	write (1, &symbol, 1);
}

/*int	main(void)
{
	ft_is_negative(5);
}*/
