#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
    int i;
    i = 0;

    char *s1 = (char *) str1;
    char *s2 = (char *) str2;
    while (n > 0)
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
        n--;
    }
    return 0;
}

int main ()
{
    char s1[] = "hola Anita";
    char s2[] = "hola Znita";
    printf("%i\n",  ft_memcmp (s1, s2, 7));
    printf("%i\n",  memcmp (s1, s2, 7));
    return 0;
}