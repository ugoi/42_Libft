#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>

int     ft_isalpha(int argument);
int     ft_isdigit(int arg);
int     ft_isalnum(int argument);
int     ft_isascii(int argument);
int     ft_isprint(int argument);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int     ft_toupper(int arg);
int     ft_tolower(int arg);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
int	    ft_strncmp(const char * s1, const char * s2, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char   *ft_strnstr(const char *str, const char *to_find, size_t len);
int     ft_atoi(const char *str);
void    *ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *src);


#endif