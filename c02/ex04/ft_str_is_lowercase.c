/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:43:45 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/10 18:43:48 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	string = "hola";
	string2 = "AdIos";
	string3 = "";
	printf("hola returns: %i\n", ft_str_is_lowercase(string));
	printf("AdIos returns: %i\n", ft_str_is_lowercase(string2));
	printf("empty string returns: %i\n", ft_str_is_lowercase(string3));
}*/
