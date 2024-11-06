#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int	ft_strncmp(const char *str1, const char *str2, size_t num);
char *ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memchr(const void *ptr, int value, size_t num);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *ptr, size_t num);
void *ft_memmove(void *dest, const void *src, size_t n);
int	ft_atoi(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
