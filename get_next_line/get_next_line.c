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
	int		control;
	//list = NULL;

	//make sure everything is correct
	if (fd < 0 || BUFFER_SIZE <= 0)
	{	
		printf("Error: Invalid file descriptor or BUFFER_SIZE\n");
		return (NULL);
	}
	printf("check-point #1\n");
	//check if the list contains \n so far
	//while(contain_n(list) == 0)
	if (list == NULL)
	{
		printf("list = copy_from_buffer");
		list = copy_from_buffer(list, fd);
	}
	else
		copy_from_buffer(list, fd);
	/* printf("()check-point #777 list -> content:%c\n", list ->content); */
	if(list == NULL){
		printf("()check-point #666 list es NULL\n");
		return (NULL);
	}
	control = 0;
	print_list(list);
	while(contain_n(list) == 0)
	{	
		printf("check-point #2\n");
		//copy from buffer to list
		if (!copy_from_buffer(list, fd))
		{	
			printf("check-point #3\n");
			control = 1;
			//print_list(list);
			break;//aqui esta el problema tambien
			//return (NULL);
		}
		print_list(list);
	}
	print_list(list);
	printf("check-point #4\n");
	//fetch the line from list
	if(list == NULL)
		printf("()check-point #5 list es NULL\n");
	if (control == 1)
	{
		return(NULL);
	}
	else
		line = copy_to_string(&list);
	printf("line: %s\n", line);
	return(line);
}

int main(void)
{
	int fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	//printf("MAIN() line: %s\n", line);
	while (line != NULL)
	{
		printf("MAIN() line: %s\n", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
 
