#include <stddef.h> //size_t
#include <stdlib.h> //malloc
#include <unistd.h> //write
#include <fcntl.h> //flags open

int	ft_atoi(const char *string);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t element_size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void    *ft_memset(void *ptr, int x, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(const char *s1, const char *s2);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	ft_tolower(int c);
char	ft_toupper(int c);
unsigned int	ft_strlen(const char *s);
