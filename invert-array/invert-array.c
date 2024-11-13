#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;

    while (i <= size/2)
    {   
        temp = tab[i];
        tab[i] = tab[size-1-i];
        tab[size -1 -i] = temp;
        i++;
    }
}

int main(void)
{
    int size;
    int numbers[] = {1, 2, 3, 4, 5};
    size = 5;

    printf("original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i", numbers[i]);
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