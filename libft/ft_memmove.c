/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:27 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:27 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char		*d;
	const char	*s = (const char *)src;
	int			i;

	d = (char *)dest;
	i = 0;
	//printf("s+count=%p, s=%p, d=%p\n", s+count, s, d);
	if (s + count > d)
	{
		//printf("PATRAS\n");
		i = count - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		while (i < (int)count)
		{
			//printf("PALANTE\n");
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char dest[21] = "a shiny white sphere";
	char *src = dest + 2;
	ft_memmove(dest + 8, src, 11);
	char    src[] = "lorem ipsum dolor sit amet";
    char    *dest;
	dest = src + 1;
	ft_memmove(src, dest, 8);
	printf("%s\n", dest);
}*/