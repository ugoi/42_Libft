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

#endif