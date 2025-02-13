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

void	copy_from_buffer(t_list **list, int fd)
{
	char *buffer;
	int bytes_read;

//¿is there a \n?
	while (!found_new_line(*list)) /*no entiendo porque es 'list*' */
	{	
		printf("--> copy_from_buffer: check-point #1\n");
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
			if (!buffer)
				return ;
		printf("--> copy_from_buffer: check-point #2\n");
		bytes_read = read (fd, buffer, BUFFER_SIZE);
		if (bytes_read <=  0)
		{
			free(buffer);
			return ;
		}
		printf("--> copy_from_buffer: check-point #3\n");
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
	
	printf("--> append: check-point #1\n");
	lastnode = find_last_node(*list);
	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return ;
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

char *copy_to_string(t_list *list) /*porque aqui es t_list '*list' y no '**list'*/
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

void	clean_list(t_list **list)
{
	t_list	*newnode;
	t_list	*lastnode;
	char	*buf;
	int i = 0;
	int k = 0;
	//reservamos la memoria para el buffer
	buf = malloc(BUFFER_SIZE + 1);
	printf("--> clean_list: check-point #1\n");
	if (buf == NULL || BUFFER_SIZE == 0)
		return ;
	//reservamos la memoria para el nuevo nodo que pasará a ser el primer nodo de la lista
	newnode = malloc(sizeof(t_list));
	lastnode = malloc(sizeof(t_list));
	//necesitamos encontrar el último nodo (que es el que probablemente contenga
	// información que queremos conservar para la siguente vuelta)
	lastnode = find_last_node(*list);
	//copiamos el contenido del ultimo nodo en el buffer, pero solo el que está despues del \n
	printf("--> clean_list: check-point #2\n");
	while(lastnode ->content[i] != '\n' && lastnode ->content[i] != '\0')
		i++;
	i++; /*para salta el \n*/
	printf("--> clean_list: check-point #3\n");
	while(lastnode -> content[i] != '\0')
	{
		buf[k] = lastnode -> content[i];
		k++;
		i++;
	}
	printf("--> clean_list: check-point #4\n");
	buf[k] = '\0';
	//copy the chars after '\n' from last node to new node
	newnode ->content = buf;
	printf("--> clean_list: check-point #5\n");
	newnode ->next = NULL;
	printf("--> clean_list: check-point #6\n");
	dealloc(list, newnode, buf);
	printf("--> clean_list: check-point #7\n");
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
	printf("check-point #1\n");
	copy_from_buffer(&list, fd);
	printf("check-point #2\n");
	//check if the list contains \n so far
	//while(contain_n(list) == 0)
	if (list == NULL)
		return (NULL);
	
	//fetch the line from the list;
	printf("check-point #3\n");
	line = copy_to_string(list);
	printf("check-point #4\n");
	//lo que queremos con polish list es que los nodos de la lista que se han usado se borren
	// y que el ultimo nodo se transforme en el primero
	// y en el caso de que ese nodo tenga información que ya ha sido copiada (ej: adios.\nMe\0)
	// limpiaremos el nodo dejandolo asi (Me\0)
	clean_list(&list);
	printf("check-point #5\n");
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
 
