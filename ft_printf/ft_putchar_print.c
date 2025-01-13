/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:34 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:34 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_print(char c, int *count)
{
	write (1, &c, 1);
	(*count)++;
}

/* int	main(void)
{	
	int count = 0;
	ft_putchar_print('B', &count);
	printf ("%d", count);
} */