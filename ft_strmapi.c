/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:49:01 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/15 23:21:57 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	char			*res_cast;
	unsigned int	i;

	if (!s)
		return (0);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	res_cast = res;
	if (!res_cast)
		return (0);
	i = 0;
	while (*s)
	{
		*res_cast++ = f(i++, *s++);
	}
	*res_cast = '\0';
	return (res);
}
