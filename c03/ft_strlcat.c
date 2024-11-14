//#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    if (size==0){
        return (i);
    }
    while (src[j] != '\0' && (i < size-1)) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (i);
}