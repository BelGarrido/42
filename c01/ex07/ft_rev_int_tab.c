/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:26:10 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/08 10:27:15 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int	main(void)
{
	int	size;
	int	numbers[] = {1, 2, 3, 4};

	size = 4;
	printf("original array: ");
	for (int i = 0; i < size; i++)
	{
		printf ("%i", numbers[i]);
	}
	ft_rev_int_tab(numbers, size);
	printf("\n");
	printf("new array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%i", numbers[i]);
	}
	printf("\n");
}
