/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:38:36 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/03 14:18:42 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphr;

	alphr = 'z';
	while (alphr >= 'a')
	{
		write (1, &alphr, 1);
		alphr--;
	}
}

/*int	main(void)
{
ft_print_reverse_alphabet();
}*/
