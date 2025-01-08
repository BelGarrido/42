/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:16 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:16 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*string;
	unsigned char			uc;

	string = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*string == uc)
		{
			return ((void *)string);
		}
		n--;
		string++;
	}
	return (NULL);
}

/*int	main(void)
{   
	//const char *s = "halo";
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	int c = 'h';

	printf("%s\n", (char *)ft_memchr(s, 2 + 256, 3));
	printf("%s", (char *)memchr(s, 2 + 256, 3));
}*/
