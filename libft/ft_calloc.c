/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:43:58 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/10 12:44:19 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t element_size)
{
	void	*mem;

	mem = malloc(num * element_size);
	if (!mem)
		return (NULL);
	if (num == 0 || element_size == 0)
	{
		num = 1;
		element_size = 1;
	}
	ft_memset(mem, '\0', num * element_size);
	return (mem);
}

/*int	main()
{	
	int num = 5;
	char *mem = (char *)ft_calloc(num, sizeof(char));
	int i= 0;
	while(i < num)
	{
		printf("%d\n", mem[i]);
		i++;
	}
}*/
