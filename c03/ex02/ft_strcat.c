#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (dest);
}

int main()
{
    char dest1[50] = "Hello, ";
    char src1[] = "world!";
    printf("Dest: %s\n", dest1);
    ft_strcat(dest1, src1);
    printf("Dest + src: %s\n", dest1);
    return (0);
}