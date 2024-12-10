/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:46:57 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 17:46:59 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 20;
    unsigned int result = ft_strlcat(dest, src, size);
    printf("dest + src: %s\n", dest);
    printf("dest + src length: %u\n", result); 
    return (0);
}*/
