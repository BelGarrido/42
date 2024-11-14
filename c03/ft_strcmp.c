//#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
    int i = 0;    
    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]); // Return the difference if characters differ
        i++;
    }

    // If loop exits, one or both strings have ended; return their difference
    return (s1[i] - s2[i]);
}
