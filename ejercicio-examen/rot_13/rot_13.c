/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:38:56 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/15 12:38:58 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rot_13(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
			
		}
		write (1, &str[i], 1);
		i++;
	}
}
int	main(void)
{
	char string1[] = "hola";
	rot_13(string1);
	printf("\n");
	return 0;
}
