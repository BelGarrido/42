/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:47:34 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/08 10:47:41 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;
	int	ref_position;

	i = 0;
	ref_position = tab[i];
	size = 7;
	while (i < size)
	{
		ref_position = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (ref_position > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
				ref_position = tab[i];
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	size;
	int	numbers[] = {10, 2, 8, 42, 0, 1, 6};

	size = 7;
	printf("original array: ");
	for (int i = 0; i < size; i++)
	{
		printf ("%i ", numbers[i]);
	}
	ft_rev_int_tab(numbers, size);
	printf("\n");
	printf("new array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%i ", numbers[i]);
	}
	printf("\n");
}
*/