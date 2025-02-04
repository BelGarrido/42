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

char * get_next_line(int fd)
{
	static  t_list	* list;
	char	* line;
	list = NULL;

	//make sure everything is correct
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		printf("Error: Invalid file descriptor or BUFFER_SIZE\n");
		return (NULL);
	}

	//copy from buffer to list
	if (!copy_from_buffer(list, fd))
		return (NULL)

	//check if the list contains \n so far
	if (contain_n(list) != 0)
	{	
		//fetch the line from list
		copy_to_string
	}










	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return NULL;
	buffer[bytes_read] = '\0'; // why bytes_read and not bytes_read + 1?
	//line vacío?
		//si -> copy buffer into line
		//no -> append buffer into line 
	line = (char *)malloc((bytes_read + 1) * sizeof (char));
	if (!line)
	{
		return NULL;
	}
 	while (buffer[i] != '\0')
	{	
		if (line[i] == '\n')
			break;
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

