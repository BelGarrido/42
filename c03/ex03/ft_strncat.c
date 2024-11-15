//#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && (j < nb))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (dest);
}

/*int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world! This is a test.";
    unsigned int nb = 6;
    printf("Dest: %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("Dest + src: %s\n", dest); 
    return (0);
}*/