/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:00:07 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/17 11:00:07 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <fcntl.h>   // For open(), O_RDONLY, etc.
#include <unistd.h>  // For read(), close(), etc.
#include <stdlib.h>  // For malloc(), free(), etc.
#include <stdio.h>   // For debugging with printf(), perror(), etc.

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5  // Default buffer size

#endif

typedef struct s_list
{
	char			*content;
	struct s_list 	*next;
}	t_list;

void	copy_from_buffer(t_list **list, int fd);
void	append(t_list **list, char *buffer);
char	*copy_to_string(t_list *list);
void	clean_list(t_list **list);
char	*get_next_line(int fd);
int		found_new_line(t_list *list);
t_list	*find_last_node(t_list *lst);
void	print_list(t_list *list);
void	write_str(t_list *list, char *line);
int		len_to_newline(t_list *list);
void	dealloc(t_list **list, t_list *newnode, char *buffer);

#endif