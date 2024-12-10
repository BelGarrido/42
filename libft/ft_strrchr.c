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

char *ft_strrchr(const char *s, int c)
{
	int occur = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			s++;
			occur = 1;
		}
		s++;
	}
	if (occur != 0)
		return (char *)s;
	else
		return NULL;
}

int main(void)
{   
    const char *s = "hola";
    int c = 'a';
    printf("%p",ft_strrchr(s, c));
}
