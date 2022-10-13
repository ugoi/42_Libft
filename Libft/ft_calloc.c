/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:55:28 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 11:02:08 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    *ft_calloc(size_t nitems, size_t size)
{
    void *res;

    if(!(res = malloc(nitems * size)))
        return (NULL);
    ft_bzero(res, nitems * size);
    return (res);
}
