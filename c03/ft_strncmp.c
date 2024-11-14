//#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i = 0;

    // Loop through each character in both strings up to n characters
    while (s1[i] && s2[i] && (i < n)) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]); // Return difference if characters differ
        i++;
    }

    // If n characters are reached or one string ends, return their difference
    if (i < n) {
        return (s1[i] - s2[i]);
    }
    
    return 0; // Return 0 if all compared characters are equal up to n
}
