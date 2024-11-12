/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:47:33 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/10 18:47:34 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*string;
	char	*string2;
	char	*string3;

	string = "hOlA";
	string2 = "ADIOS";
	string3 = "";
	printf("hOlA returns: %i\n", ft_str_is_uppercase(string));
	printf("ADIOS returns: %i\n", ft_str_is_uppercase(string2));
	printf("empty string returns: %i\n", ft_str_is_uppercase(string3));
}*/
