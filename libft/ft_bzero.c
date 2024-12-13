/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:34:10 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 15:34:13 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s2;

	s2 = (char *) s;
	i = 0;
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}
}

/*int main (){

	char ptr[] = "hola anita";
	char ptr_l[] = "hola anita";
	ft_bzero(ptr +2, 3);
	printf("%s\n", ptr);
	bzero(ptr_l+2, 3);
	printf("%s\n", ptr_l);
	return 0;
}*/
