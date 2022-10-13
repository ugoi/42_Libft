/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:21:21 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 08:36:08 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    const char *str_cast;

    str_cast = str;
	while (*str_cast && n--)
    {
        if (*str_cast == c)
            return ((void*) str_cast);
        str_cast++;
    }
	return (NULL);
}
