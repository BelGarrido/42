/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:00:11 by anagarri          #+#    #+#             */
/*   Updated: 2025/02/17 15:23:50 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//NUEVO

char* get_next_line(int fd)
{
	static t_list *list;
	static int eof = 0;
	char* line;
	int size_to_write;
	//int pos;

	if(BUFFER_SIZE<0)
		return NULL;
/* 	pos = lseek(fd, 0, SEEK_CUR);
	if ( pos == 0)
	{
		free_list(&list);
		list = NULL;
		eof = 0;
	} */
	while((size_to_write = check_list_write(list, eof))==0)
	{
		eof = copy_from_buffer(&list, fd, eof);
		if (eof < 0 || (!list && eof > 0))
		{
			free_list(&list);
			eof = 0;
			return NULL;
		}
	}
	line = copy_to_string(&list, size_to_write);
	if (!line)
	{
		free_list(&list);
		eof = 0;
		return NULL;
	}
	if (eof > 0 && !list)
	{
		eof = 0;
		free_list(&list);
	}
	return line;
}


/* int main(void)
{
	int fd;
	char *line;
	//fd = open("text.txt", O_RDONLY);
	//fd = open("41_no_nl.txt", O_RDONLY);
	fd = open("read_error.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("1MAIN() line: %s\n", line);
	line = get_next_line(fd);
	printf("2MAIN() line: %s\n", line);
	close(fd);
	fd = open("read_error.txt", O_RDONLY);
	line = get_next_line(fd);
	//printf("MAIN() line: %i\n", fd);
	while (line != NULL) 
	{
		printf("MAIN() line: %s\n", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
} */