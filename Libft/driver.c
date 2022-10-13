/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:39:39 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 20:35:43 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

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
    char dest[] = "hello_worldgg";
    const char src[]  = "newstring";

    printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, dest + 6, 7);
    printf("After ft_memmove dest = %s, src = %s\n", dest, src);

    char dest2[] = "hello_worldgg";
    const char src2[]  = "newstring";
    
    memmove(dest2, dest2 + 6, 7);
    printf("After memmove dest = %s, src = %s\n", dest2, src2);
}

void ft_strlcpy_test(void)
{
    char src[40] = "Hello How Are You";
    char dest[100];
  
    printf("ft_strlcpy_test\n");
    ft_strlcpy(dest, src, 18);

    printf("ft_strlcpy: %s\n", dest);

    strlcpy(dest, src, 18);
    printf("strlcpy : %s\n", dest);
}

void ft_strlcat_test(void)
{
   char src[50] = "This is source";
   char dest[50] = "This is destination";
   size_t size = 34;
    
    printf("ft_strlcat_test\n");
    ft_strlcat(dest, src, size);
    printf("ft_strlcat :    |%s|\n", dest);

    char dest2[50] = "This is destination";
    
    strlcat(dest2, src, size);
    printf("strlcat :   |%s|", dest);
}

void ft_toupper_test(void)
{
    printf("ft_toupper_test\n");
   int i = 0;
   char c;
   char str[] = "Tutorials Point";
   
   while(str[i]) {
      putchar (ft_toupper(str[i]));
      i++;
   }
}

void ft_tolower_test(void)
{
    printf("ft_tolower_test\n");
   int i = 0;
   char c;
   char str[] = "TutoriAls Point";
   
   while(str[i]) {
      putchar (ft_tolower(str[i]));
      i++;
   }
}

void ft_strchr_test(void)
{
    printf("\nft_strchr_test\n");
	char s[] = "tripouille";
	// /* 1 */ check(ft_strchr(s, 't') == s); showLeaks();
	// /* 2 */ check(ft_strchr(s, 'l') == s + 7); showLeaks();
	// /* 3 */ check(ft_strchr(s, 'z') == 0); showLeaks();
	printf("strchr: %s\n", ft_strchr(s, 0));
   printf("expected: %s\n", s + strlen(s));
	// /* 5 */ check(ft_strchr(s, 't' + 256) == s); showLeaks();
}

void ft_strchrr_test(void)
{
   char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char s3[] = "";
    printf("\nft_strchr_test\n");
   printf("strrchr: %s\n", ft_strrchr(s, 't'));
   printf("expected: %s\n", s);
}

void ft_strncmp_test(void)
{
    printf("\nft_strncmp_test\n");
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   ret = ft_strncmp(str1, str2, 4);

   printf("ft_strncmp\n");
   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }

   printf("\nstrncmp\n");
   ret = strncmp(str1, str2, 4);
    if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
}

void ft_memchr_test(void)
{
    printf("\nft_memchr_test\n");
   char s[] = {0, 1, 2 ,3 ,4 ,5};
   char *ret;

   ret = ft_memchr(s, 0, 1);
    
   printf("memchr: %s\n", (char *)ret);

   
}

void ft_memcmp_test(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	// printf("ft_memcmp: %d\n", ft_memcmp(s, s2, 1));  
	// check(ft_memcmp(s2, s, 1) < 0);
	// check(ft_memcmp(s2, s3, 4) != 0);
   printf("ft_memcmp: %d\n", ft_memcmp(s2, s3, 4));  
}

void ft_strnstr_test(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
   
   printf("strnstr: %s  expected: %s\n", ft_strnstr(empty, "", 0), empty);
}

void ft_atoi_test(void)
{
   int val;
   char str[20];
    
    printf("\nft_atoi_test\n");
    printf("ft_atoi\n");
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   printf("atoi\n");
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
}

void ft_calloc_test(void)
{
   int i, n;
   int *a;

   printf("\nft_calloc_test\n");
   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
}

void ft_strdup_test(void)
{
    char source[] = "GeeksForGeeks\n";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
 
    printf("\nft_strdup_test\n");
    printf("%s", target);
}


void ft_substr_test(void)
{
   
   char const s[] = "TutorialsPoint";
   unsigned int start = 9;
   size_t len = 14;
   
   char *ret;

   ret = ft_substr(s, start, len);

    printf("\nft_substr_test\n");
    printf("The substring is: %s\n", ret);
}

void ft_strjoin_test(void)
{
   printf("\nft_strjoin_test\n");
   char const  s1[] = "iuhiuiuh";
   char const  s2[] = "xkxxxxxx\n";
   char  *res = ft_strjoin(s1, s2);

   printf("res: %s\n", res);
}

void ft_strtrim_test(void)
{
   printf("\nft_strtrim_test\n");
   char const  s1[] = "abcHelloMaxabc";
   char const  set[] = "abc";
   char  *res = ft_strtrim(s1, set);

   printf("res: %s\n", res);
}

int main(void)
{
   //  ft_isalpha_test();
   //  ft_isdigit_test();
   //  ft_isalnum_test();
   //  ft_isascii_test();
   //  ft_isprint_test();
   //  ft_strlen_test();
   //  ft_memset_test();
   //  ft_bzero_test();
   //  ft_memcpy_test();
   //  ft_memmove_test();
   //  ft_strlcpy_test();
   //  ft_strlcat_test();
   //  ft_toupper_test();
   //  ft_tolower_test();
   //  ft_strchr_test();
   //  ft_strchrr_test();
   //  ft_strncmp_test();
   //  ft_memchr_test();
   //  ft_memcmp_test();
    ft_strnstr_test();
   //  ft_atoi_test();
   //  ft_calloc_test();
   //  ft_strdup_test();
   //  ft_substr_test();
   //  ft_strjoin_test();
   //  ft_strtrim_test();
    return 0;
}