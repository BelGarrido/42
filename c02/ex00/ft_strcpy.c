/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:28:57 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/06 12:29:13 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	src_index;

	src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[src_index] = src[src_index];
		src_index++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*string1;
	char	string2[20];

	string1 = "hola";
	ft_strcpy(string2, string1);
	printf("original :%s\n", string2);
	printf("copia :%s\n", string1);
	return (0);
}*/
