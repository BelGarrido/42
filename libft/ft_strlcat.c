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

#include "libft.h"
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (i < (size - 1)))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	return (dest_len + src_len);
}

/*int	main()
{
	char	dest[50] = "a";
    char	src[] = "lorem ipsum dolor sit amet";
    unsigned	int size = 20;
    unsigned	int result = ft_strlcat(dest, src, 0);
	//unsigned int result2 = strlcat(dest, "lorem", 15);
    printf("dest + src: %s\n", dest);
    printf("dest + src length: %u\n", result); 

	printf("dest + src: %s\n", dest);
   // printf("dest + src length: %u\n", result2); 
    return (0);
}*/
