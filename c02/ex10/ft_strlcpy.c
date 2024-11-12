/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:30:13 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/11 12:30:16 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *src)
{
	int	length;

	length = 0;
	while (*src != '\0')
	{
		length++;
		src++;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	char	string1[] = "hola, que tal?";
	char	string2[10];
	int	size;

	size = 4;
	ft_strlcpy(string2, string1, size);
	printf("original: %s\n", string1);
	printf("copia: %s\n", string2);
	return (0);
}
