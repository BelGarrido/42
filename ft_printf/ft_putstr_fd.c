/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:57 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:57 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stddef.h> // size_t
# include <stdlib.h> // malloc
# include <unistd.h> // write
# include <fcntl.h>  // flags open
# include <stdio.h> // printf

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
		count++;
	}
}

int	main(void)
{	
	char *string = "hola";
	int count = 0;
	int fd = open("./prueba.txt", O_WRONLY);
	ft_putstr(string, &count);
	printf ("%i", count);
}