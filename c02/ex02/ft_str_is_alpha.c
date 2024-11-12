/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:54:47 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/10 17:54:49 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
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

	string = "hoLa";
	string2 = "adi0s";
	string3 = "";
	printf("hoLa returns: %i\n", ft_str_is_alpha(string));
	printf("adi0s returns: %i\n", ft_str_is_alpha(string2));
	printf("empty string returns: %i\n", ft_str_is_alpha(string3));
}*/
