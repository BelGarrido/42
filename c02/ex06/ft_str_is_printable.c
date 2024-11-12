/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:53:42 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/10 18:55:21 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*string;
	char	*string2;
	char	*string3;

	string = "~½¬";
	string2 = "##&A@";
	string3 = "";
	printf("~½¬ returns: %i\n", ft_str_is_printable(string));
	printf("##&A@ returns: %i\n", ft_str_is_printable(string2));
	printf("empty string returns: %i\n", ft_str_is_printable(string3));
}
