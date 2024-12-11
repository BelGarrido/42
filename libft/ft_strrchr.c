/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:01:40 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/18 18:01:42 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{	
	int len = ft_strlen(s);

	while (s+len > s)
	//while (len > 0)
	{
		if (s[len] == c)
		{
			return ((char *)s + len);
			// return ((char *)&s[len]);
		}
		len--;
	}
	
	return (NULL);
}

int main(void)
{   
    const char *s = "holajhfagf";
    int c = 'a';
    printf("%s\n",ft_strrchr(s, c));
}
