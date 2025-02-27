/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:00:11 by anagarri          #+#    #+#             */
/*   Updated: 2025/02/21 22:26:56 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check_list_write(t_list *list, int eof)
{
	int		size;
	t_list	*aux;

	size = 0;
	aux = list;
	if (!list)
		return (0);
	while (aux != NULL)
	{
		if (aux->content == '\n')
			return (size + 1);
		aux = aux -> next;
		size++;
	}
	if (eof > 0)
		return (size);
	return (0);
}

int	copy_from_buffer(t_list **list, int fd, int eof)
{
	char	*buffer;
	int		bytes_read;

	if (eof > 0)
		return (1);
	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
		return clean_buffer(NULL, list, -1);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read < BUFFER_SIZE)
	{
		if (bytes_read < 0)
			return clean_buffer(buffer, list, -1);
		else if (bytes_read == 0)
			return clean_buffer(buffer, NULL, 1);
		eof = 1;
	}
	append_node(list, bytes_read, buffer);
	free(buffer);
	return (eof);
}

char	*copy_to_string(t_list **list, int size)
{
	t_list	*aux;
	int		i;
	char	*line;

	i = 0;
	if (!list || !(*list))
		return (NULL);
	line = (char *)malloc(size + 1 * sizeof(char));
	if (!line)
		return (NULL);
	while (i < size)
	{
		line[i] = (*list)->content;
		aux = (*list);
		*list = (*list)->next;
		free(aux);
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static t_list	*list;
	static int		eof;
	char			*line;
	int				size_to_write;

	eof = 0;
	size_to_write = 0;
	if (BUFFER_SIZE < 0)
		return (NULL);
	while (size_to_write == 0)
	{
		eof = copy_from_buffer(&list, fd, eof);
		if (eof < 0 || (!list && eof > 0))
			return clean(&list, &eof);
		size_to_write = check_list_write(list, eof);
	}
	line = copy_to_string(&list, size_to_write);
	if (!line)
		return (char*) clean(&list, &eof);
	return (line);
}

char *clean(t_list **list, int *eof){
	t_list	*tmp;
	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp);
	}
	*eof = 0;
	return (NULL);
}

/* int *general_clean(t_list **list, int *eof, char *buffer,  int re)
{
	if (buffer)
		free(buffer);
	if (list)
		free_list(list);
	if (eof){
		*eof = 0;
		return (NULL);
	}
	return (re);
} */


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