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

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*string = (const char *)s;

	while (n > 0)
	{
		if (*string == c)
		{
			return ((char *)string);
		}
		n--;
		string++;
	}
	return (NULL);
}

/*int	main(void)
{   
	const char *s = "halo";
	int c = 'a';

	printf("%p\n", ft_memchr(s, c, 4));
	//printf("%p", memchr(s, c, 4));
}*/
