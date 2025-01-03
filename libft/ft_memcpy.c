/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:06:02 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 16:06:04 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*src;

	i = 0;
	dest = (unsigned char *)dest_str;
	src = (unsigned char *)src_str;
	if (!dest && !src)
		return (NULL);
	if (n > 0)
	{
		while (i < (n))
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest_str);
}

/*int	main(void)
{
	char	string1[] = "hola, que tal?";
	char	*string2 = (char *)malloc(strlen(string1)*sizeof(char));
	int	size;

	size = 8;
	ft_memcpy(string2, string1, size);
	printf("original: %s\n", string1);
	printf("copia: %s\n", string2);
	return (0);
}*/
