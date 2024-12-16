/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:01:40 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/16 15:26:29 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s + len >= s)
	{
		if (s[len] == (char)c)
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
