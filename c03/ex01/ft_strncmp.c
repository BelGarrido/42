#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && (i < n))
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }

    if (i < n)
    {
        return (s1[i] - s2[i]);
    }
    
    return 0;
}

int main()
{
    char str1[] = "ANA";
    char str2[] = "ANABEL";
    printf("ft_strncmp(str1, str2, 4) = %d\n", ft_strncmp(str1, str2, 4));
    return (0);
}