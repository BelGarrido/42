/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebagnl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:59:58 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/30 12:48:28 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1  // Default buffer size

#endif

/* BUFFER
    details to have in mind with d-Buffer xx
        Keep track of how much data was read (not all BUFFER_SIZE bytes may be filled in the last read).
        Process only the actual data read, not the whole buffer size.

    If the input data is larger than the buffer size:
        Use a loop to repeatedly fill the buffer with new data and process it until the entire input is consumed.
        Handle cases where the remaining data is smaller than BUFFER_SIZE gracefully.

    Some functions, like get_next_line(), might not process all the data in the buffer before reading again. For example:
        If you're reading line-by-line, part of the buffer might belong to the next line.
        Store the "leftover" data (the part not yet processed) for the next iteration.
 */

/* STATIC VARIABLES
    A static variable in C is a variable whose lifetime (existence in memory) is tied to the entire runtime of the program,
    but its scope (visibility) depends on where it is defined. Static variables are used when you need a variable to retain
    its value across multiple function calls or restrict its visibility to a specific part of the program.
*/

/*
funciones a usar: 
ft_strdup --> para escribir de store a line;
ft_strlcat --> para unir desde buffer to store;
¿ft_bzero? --> para borrar lo que se ha escrito en line = lo que hay antes de \n
*/

//lee el fichero y acumula en el buff n bytes
read(fd, buffer, BUFFER_SIZE);
//reserva la memoria para temp_l

//copia esos n bytes a temp_l
copy(buff, temp_l)
//comprueba si hay \n para escribir la línea
if (contains(temp_l, "\n"))
{
    copy(temp_l, print_l)
    memmove(temp_l, temp_l + n_positio, strlen(temp_l - strlen(print_l)))
    print
}
else
{
    copy(buff, temp_l)
}