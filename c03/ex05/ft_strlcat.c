/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:32:05 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/15 12:32:07 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size == 0)
	{
		return (i);
	}
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
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
