#include <stdio.h>
#include <string.h>

void    *ft_memset(void *ptr, int x, unsigned int n)
{
    int i = 0;
    char *ptr2 = (char *) ptr;
    while(i<n)
    {
        ptr2[i] = x;
        i++;
    }
    return ptr;
}

int main (){

    char ptr[] = "hola anita";
    char ptr_l[] = "hola anita";
    ft_memset(ptr+2, 'A', 3);
    printf("%s\n", ptr);
    memset(ptr_l+2, 'A', 3);
    printf("%s\n", ptr_l);

    return 0;
}