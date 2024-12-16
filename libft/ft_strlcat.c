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

/*The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
The strlcat() function returns the total length of the string they tried to create.
For strlcat() that means the initial length of dst plus the length of src.
Note, however, that if strlcat() traverses size characters without finding a NUL,
the length of the string is considered to be size and the destination string will not
be NUL-terminated (since there was no space for the NUL). This keeps strlcat() from
running off the end of a string.*/

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
