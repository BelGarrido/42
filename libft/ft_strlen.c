/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:49:08 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 17:49:10 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/*int main ()
{
	char *string = "hola";
	printf("%i\n", ft_strlen(string));
}*/
