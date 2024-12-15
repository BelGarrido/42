/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:01:40 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/15 21:33:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s + len >= s)
	{
		if (s[len] == c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (NULL);
}

/*int main(void)
{   
    const char *s = "bonjour";
    int c = 'b';
    printf("%s\n",ft_strrchr(s, c));
}*/
