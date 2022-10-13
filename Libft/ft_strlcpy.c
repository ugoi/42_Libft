/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:32:34 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/12 09:15:25 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// Alternative code
// size_t ft_strlcpy(char *dst, const char *src, size_t size)
// {
//     size_t src_len;

//     src_len = ft_strlen(src);
//     if (src_len + 1 < size)
//     {
//         ft_memcpy(dst, src, src_len + 1)
//     }
//     else if (size != 0)
//     {
//         ft_memcpy(dst, src, size - 1)
//         dst[size - 1] = '\0';
//     }
//     return (src_len);
// }