#include <stdio.h>

int	main(void)
{
	int	array[] = {5, 7, 8, 5, 34, 68, 1, 3};
	int	size;
	int	i;
	int	j;
	int	pivote;
	int	pos_aux;

	size = 8;
	i = 0;
	while (i < size)
	{
		pos_aux = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[pos_aux])
			{
				pos_aux = j;
			}
			j++;
		}
		pivote = array[pos_aux];
		array[pos_aux] = array[i];
		array[i] = pivote;
		i++;
	}
	for (int k = 0; k < size; k++)
	{
		printf("%i\n", array[k]);
	}
}

//{1|7,8,5,34,68,5,3}
//{1,3|8,5,34,68,5,7}
//{1,3,5|8,34,68,5,7}
//{1,3,5,5|34,68,8,7}
