/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:39:39 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/11 17:00:48 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_test(int input, int expected, int (*f)(int))
{
    int result;

    result = (*f)(input);
    printf("Input: %c Expected: %d Result: %d\n", input, expected, result);
}

void ft_test2(char *input, size_t expected, size_t (*f)(const char *s))
{
    size_t result;

    result = (*f)(input);
    printf("Input: %s Expected: %zd Result: %zd\n", input, expected, result);
}

void ft_isalpha_test(void)
{
    printf("ft_isalpha_test\n");
    ft_test('6', 0, ft_isalpha);
    ft_test('B', 1, ft_isalpha);
    ft_test('v', 1, ft_isalpha);
}

void ft_isdigit_test(void)
{
    printf("ft_isdigit_test\n");
    ft_test('6', 1, ft_isdigit);
    ft_test('B', 0, ft_isdigit);
    ft_test('v', 0, ft_isdigit);
}

void ft_isalnum_test(void)
{
    printf("ft_isalnum_test\n");
    ft_test('6', 1, ft_isalnum);
    ft_test('B', 1, ft_isalnum);
    ft_test('v', 1, ft_isalnum);
    ft_test('!', 0, ft_isalnum);
    ft_test('+', 0, ft_isalnum);
}

void ft_isascii_test(void)
{
    printf("ft_isascii_test\n");
    ft_test('6', 1, ft_isascii);
    ft_test('B', 1, ft_isascii);
    ft_test('v', 1, ft_isascii);
    ft_test('!', 1, ft_isascii);
    ft_test('+', 1, ft_isascii);
    ft_test(128, 0, ft_isascii);
}
void ft_isprint_test(void)
{
    printf("ft_isascii_test\n");
    ft_test('6', 1, ft_isprint);
    ft_test('B', 1, ft_isprint);
    ft_test('v', 1, ft_isprint);
    ft_test('!', 1, ft_isprint);
    ft_test('+', 1, ft_isprint);
    ft_test(128, 0, ft_isprint);
    ft_test('\a', 0, ft_isprint);
}

void ft_strlen_test(void)
{
    printf("ft_isascii_test\n");
    ft_test2("Hello", 5, ft_strlen);
    ft_test2("5", 1, ft_strlen);
    ft_test2("", 0, ft_strlen);
}

void    ft_memset_test(void)
{
    printf("ft_memset_test\n");
    char str[50];
    char c;
    size_t n;

    c = '$';
    n = 7;
    strcpy(str,"This is string.h library function");
    printf("In_str:     ");
    puts(str);
    printf("In_c:       %c\n", c);
    printf("In_n:       %zu\n", n);
    printf("Expected:   $$$$$$$ string.h library function\n");

    ft_memset(str,c, n);
    printf("Out_str:    ");
    puts(str);
}

void    ft_bzero_test(void)
{
    printf("ft_bzero_test\n");
    char str[50];
    size_t n;

    n = 7;
    strcpy(str,"This is string.h library function");
    printf("In_str:     ");
    puts(str);
    printf("In_n:       %zu\n", n);
    printf("Expected:\n");

    ft_bzero(str, n);
    printf("Out_str:    ");
    puts(str);
}

void    ft_memcpy_test(void)
{
    printf("ft_memcpy_test\n");
    const char src[50] = "http://www.tutorialspoint.com";
    char dest[50];
    strcpy(dest,"Heloooo!!");
    printf("Before memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, strlen(src)+1);
    printf("After memcpy dest = %s\n", dest);
}

void    ft_memmove_test(void)
{
    printf("ft_memmove_test\n");
    char dest[] = "oldstring";
    const char src[]  = "newstring";

    printf("Before memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, dest + 5, 9);
    printf("After memmove dest = %s, src = %s\n", dest, src);
}

int main(void)
{
    ft_isalpha_test();
    ft_isdigit_test();
    ft_isalnum_test();
    ft_isascii_test();
    ft_isprint_test();
    ft_strlen_test();
    ft_memset_test();
    ft_bzero_test();
    ft_memcpy_test();
    ft_memmove_test();
    return 0;
}