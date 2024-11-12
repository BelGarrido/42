/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_ir_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:34:58 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/10 18:35:00 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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

	string = "170784";
	string2 = "h0l4";
	string3 = "";
	printf("170784 returns: %i\n", ft_str_is_numeric(string));
	printf("h0l4 returns: %i\n", ft_str_is_numeric(string2));
	printf("empty string returns: %i\n", ft_str_is_numeric(string3));
}*/
