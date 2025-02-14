/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:59:58 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/17 10:59:58 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>   // For open(), O_RDONLY, etc.
#include <unistd.h>  // For read(), close(), etc.
#include <stdlib.h>  // For malloc(), free(), etc.
#include <stdio.h>   // For debugging with printf(), perror(), etc.

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1  // Default buffer size

#endif

char *get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	size_t	bytes_read;
	char	* line;
	int		i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		printf("Error: Invalid file descriptor or BUFFER_SIZE\n");
		return NULL;
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return NULL;
	buffer[bytes_read] = '\0'; // why bytes_read and not bytes_read + 1?
	line = (char *)malloc((bytes_read + 1) * sizeof (char));
	if (!line)
	{
		return NULL;
	}
 	while (buffer[i] != '\0')
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return line;
}
 
int main(void)
{
	int fd;
	char * line;
	int chars_read;

	fd = open("./text.txt", O_RDONLY);

	line = get_next_line(fd);
	printf("%s\n", line);

	while ((line = get_next_line(fd)) != NULL)
	{	
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}

