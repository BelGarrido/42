/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:06:19 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/08 14:06:27 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_printf("hola me llamo %s y tengo %i años", name, edad);

Recorremos el string (mientras sea diferente de \0)
H O L A   M E   L L  A  M  O  %s Y TENGO
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
	Vamos a ir imprimiendo los caracteres[i]
	Llega a un % (checkea_tipo([i+1]))
		checkea_tipo = s;
		Comenzamos a imprimir string (putstr)

