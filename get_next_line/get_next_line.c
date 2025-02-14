/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:00:11 by anagarri          #+#    #+#             */
/*   Updated: 2025/02/13 23:36:37 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//NUEVO

char* get_next_line(int fd)
{
	static t_list *list;
	char* line;
	int size_until_n;
	int bytes_read;

	while((size_until_n = contain_n(list))==0) //si no hay \n = 0
	{
		//print_list(list);
		bytes_read = copy_from_buffer(&list, fd); // añade un \n al final cuando EOF
		//print_list(list);
		if (bytes_read < 0)
			return NULL;
		if(bytes_read < BUFFER_SIZE)
		{
			//Para actualizar el valor de size_until_n cuando EOF
			//printf("bytes_read < BUFFER_SIZE\n");
			size_until_n = contain_n(list);
			//printf("size_until_n: %i\n", size_until_n);
			break;
		}
	}

	//HAY UN FALLO SI LEE DOS /n en el mismo buffer
/*	int size_until_n = 0;
	int bytes_read;
	while (size_until_n == 0){
		bytes_read = copy_from_buffer(list, fd);
		if(bytes_read < BUFFER_SIZE){ //EOF
			if (bytes_read < 0) //ERROR
				return NULL;
			break;
		}
		size_until_n = contain_n(list);
	}*/

	line = copy_to_string(&list, size_until_n);
	return line;
}

int main(void)
{
	int fd;
	char *line;
	int counter = 0;
	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	//printf("MAIN() line: %i\n", fd);
	while (line != NULL && counter < 10)
	{
		printf("MAIN() line: %s\n", line);
		free(line);
		line = get_next_line(fd);
		counter++;
	}
	close(fd);
	return (0);
}
 
