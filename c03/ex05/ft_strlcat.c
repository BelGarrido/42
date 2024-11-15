//#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    if (size == 0)
    {
        return (i);
    }
    while (src[j] != '\0' && (i < size-1))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (i);
}

/*int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 20;
    unsigned int result = ft_strlcat(dest, src, size);
    printf("dest + src: %s\n", dest);
    printf("dest + src length: %u\n", result); 
    return (0);
}*/