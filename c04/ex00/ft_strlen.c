/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:01:40 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/18 18:01:42 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/*int	main(void)
{
	char	*string;

	string = "hello world!!!!!";
	printf("%i", ft_strlen(string));
}*/
