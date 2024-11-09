#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int count_int_array(int n);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int	ft_strncmp(const char *str1, const char *str2, size_t num);
char *ft_strchr(const char *str, int c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_itoa(int n);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_substr(const char *s, unsigned int start, size_t len);
char *ft_strjoin(const char *s1, const char *s2);
char    *ft_strtrim(const char *s1, const char *set);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memchr(const void *ptr, int value, size_t num);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *ptr, size_t num);
void *ft_memmove(void *dest, const void *src, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
int	ft_atoi(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
