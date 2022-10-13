/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:57:30 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/12 11:27:09 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char    *ft_strchr(const char *str, int c)
{
	while (*str)
    {
        if (*str == c)
            return ((char*) str);
        str++;
    }
	return (NULL);
}
