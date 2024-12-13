/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:09:33 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 16:09:35 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;
	char	*ptr2;

	i = 0;
	ptr2 = (char *) ptr;
	while (i < n)
	{
		ptr2[i] = x;
		i++;
	}
	return (ptr);
}

/*int main (){

    char ptr[] = "hola anita";
    char ptr_l[] = "hola anita";
    ft_memset(ptr+2, 'A', 3);
    printf("%s\n", ptr);
    memset(ptr_l+2, 'A', 3);
    printf("%s\n", ptr_l);

    return 0;
}*/
