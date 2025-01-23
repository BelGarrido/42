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
char *get_next_line(int fd)
{
		read();
		ft_reserva_memoria(); si se pasala flag de buffer, reservará el tamño del BUFFER /si no reservxa la memoria de la linea, byte a byte?
		ft_escribe_linea();
		la funcion retorna un string con la linea del file que se ha leido
		
}

int main(void)
{
	int fd = open("./prueba.txt", O_WRONLY);
}

