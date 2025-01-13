/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:57 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:57 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_print(char *s, int *count)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
		(*count)++;
	}
}

/* int	main(void)
{	
	char *string = "hola";
	int count = 0;
	ft_putstr_print(string, &count);
	printf ("%d", count);
	printf ("\n");
} */