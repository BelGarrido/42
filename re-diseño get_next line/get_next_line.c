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

void *copy_from_buffer(t_list **list, int fd)
{
	char *buffer;
	int bytes_read;

//¿is there a \n?
	while (!found_newline(*list)) /*no entiendo porque es 'list*' */
	{
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
			if (!buffer)
				return ;

		bytes_read = read (fd, buffer, BUFFER_SIZE);
		if (bytes_read <=  0)
		{
			free(buffer);
			return ;
		}
		buffer[bytes_read] = '\0';
		//append the node
		append(list, buffer); /*no entiendo porque es 'list' */
	}
}

/*-------------------------------------------------------------------------------------*/

void	append(t_list **list, char *buffer) 
{
	t_list	*newnode;
	t_list	*lastnode;
	
	lastnode = find_last_node(*list);
	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
//if the list it empty
//if null == *list
	if (lastnode == NULL)
		*list = newnode;
	else
		lastnode->next = newnode;
/*esta no podria cambiarse de orden?, la logica me dice que la asignación de new node deberia ser antes*/
	newnode -> content = buffer;
	newnode -> next = NULL;
}

/*-------------------------------------------------------------------------------------*/

char *copy_from_string(t_list *list) /*porque aqui es t_list '*list' y no '**list'*/
{
	char 	*line_to_print;
	int		size;

	if (list == NULL)
		return (NULL);
	
	//count how many char are until \n so I can malloc properly
	
	size = len_to_newline(list);
	
	line_to_print = malloc((size + 1) * sizeof(char));

	if (line_to_print == NULL)
		return (NULL);

	write_str(list, line_to_print);
	return (line_to_print);

}

/*-------------------------------------------------------------------------------------*/

void	clean_line(t_list **list)
{
	t_list	*newnode;
	t_list	*lastnode;

	lastnode = find_last_node(*list);

	newnode = malloc(sizeof(t_list));
	//copy the chars after '\n' from last node to new node
	newnode = (*list) -> content;
}

/*-------------------------------------------------------------------------------------*/

char	*get_next_line(int fd)
{
	static  t_list	*list;
	char	*line;

	list = NULL;

	//make sure everything is correct
	//if fd is not valid || if the buffer_size is 0 or negative || check if the read can open the file but it doesnt read anything that is why the las digit is 0
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
		return (NULL);

	//create a list until a \n is found
	copy_from_buffer(&list, fd);

	//check if the list contains \n so far
	//while(contain_n(list) == 0)
	if (list == NULL)
		return (NULL);
	
	//fetch the line from the list;
	line = copy_to_string(list);
	//
	polish_list(&list);
	return(line);
}

/*-------------------------------------------------------------------------------------*/

int main(void)
{
	int fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	printf("fd: %i\n", fd);
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
 
