/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:31:00 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/17 08:44:20 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dest_cast;
	const char	*src_cast;
	char		*last_dest_cast;
	const char	*last_src_cast;

	dest_cast = dest;
	src_cast = src;
	if (dest_cast < src_cast)
	{
		while (len--)
		{
			*dest_cast++ = *src_cast++;
		}
	}
	else
	{
	last_dest_cast = dest_cast + len - 1;
	last_src_cast = src_cast + len - 1;
		while (len--)
		{
			*last_dest_cast-- = *last_src_cast--;
		}
	}
	return (dest);
}
