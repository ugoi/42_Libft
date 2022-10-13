/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:27:21 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 18:18:38 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"
#include <stdlib.h>

char *ft_skip_first(char const *s1, char const *set)
{
    while (*set)
    {
        if (*s1++ != *set++)
            return ((char *) s1);
    }
    return ((char *) s1);
}

char *ft_skip_last(char const *s1, char const *set)
{
    int set_len;

    set_len = ft_strlen(set);
    while (*s1)
        s1++;
    while (*set)
        set++;
    while (set_len--)
    {
        if (*s1-- != *set--)
            return ((char *) s1);
    }
    return ((char *) (s1 - 1));
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char        *res;
    int         res_len;
    char        *first;
    char        *last;
    char        *res_cast;

    
    first = ft_skip_first(s1, set);
    last = ft_skip_last(s1, set);
    res_len = last - first + 1;
    res = malloc(sizeof(char) * (res_len + 1));
    if (!res)
        return (NULL);
    res_cast = res;
    while (first <= last)
        *res_cast++ = *first++;
    return ((char *) res);
}

//wwwHewww