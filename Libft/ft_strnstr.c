/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:51:05 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 20:46:27 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char   *ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t				i;
	size_t				i2;
	size_t				does_match;
	char				*p_int;

	i = 0;
	does_match = 0;
	p_int = 0;
	printf("match: %zu  len: %zu\n", does_match, len);
	while ((i <= (ft_strlen(str) - ft_strlen(to_find))) && does_match == 0 && len--)
	{
		does_match = 1;
		i2 = 0;
		while (i2 < ft_strlen(to_find))
		{
			if (!(str[i2 + i] == to_find[i2]))
				does_match = 0;
			i2++;
		}
		if (does_match == 1 && len)
			return ((char *) (str + i2 + i - ft_strlen(to_find)));	
		i++;
		i2++;
	}
	return (p_int);
}
