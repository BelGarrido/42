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
	static  t_list	*list;
	char	*line;
	
	list = NULL;

	//make sure everything is correct
	if (fd < 0 || BUFFER_SIZE <= 0)
	{	
		printf("fd: %i\n", fd);
		printf("BUFFER_SIZE: %i\n", BUFFER_SIZE);
		printf("Error: Invalid file descriptor or BUFFER_SIZE\n");
		return (NULL);
	}
	printf("check-point #1\n");
	//check if the list contains \n so far
	//while(contain_n(list) == 0)
	list = copy_from_buffer(list, fd);
	/* printf("()check-point #777 list -> content:%c\n", list ->content); */
	if(list == NULL)
		printf("()check-point #666 list es NULL\n");
		//aqui la list aun no es NULL
	while(contain_n(list) == 0)
	{	
		printf("check-point #2\n");
		//copy from buffer to list
		if (!copy_from_buffer(list, fd))
		{	
			printf("check-point #3\n");
			break;
			//return (NULL);
		}
	}
	printf("check-point #4\n");
	//fetch the line from list
	if(list == NULL)
		printf("()check-point #5 list es NULL\n");
	line = copy_to_string(list);
	//printf("line: %s\n", line);
	return(line);
}


int main(void)
{
	int fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	printf("fd: %i\n", fd);
	line = get_next_line(fd);
	printf("line: %s\n", line);
	while (line != NULL)
	{
		printf("%s\n", line),
		free(line);
		get_next_line(fd);
	}
	close(fd);
	return (0);
}
 
