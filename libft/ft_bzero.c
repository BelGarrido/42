#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, unsigned int n)
{
    int i = 0;
    char *s2 = (char *) s;
    while(i<n)
    {
        s2[i] = '\0';
        i++;
    }
    //return s;
}

int main (){

    char ptr[] = "hola anita";
    char ptr_l[] = "hola anita";
    ft_bzero(ptr +2, 3);
    printf("%s\n", ptr);
    bzero(ptr_l+2, 3);
    printf("%s\n", ptr_l);

    return 0;
}