/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:30:33 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 15:01:44 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res;
    char *res_cast;

    res = malloc(sizeof(char) * (len + 1));
    res_cast = res;
    if(!res)
        return(NULL);
    s += start;
    while (*s && len--)
        *res_cast++ = *s++;
    *res_cast = '\0';

    return (res);
}
