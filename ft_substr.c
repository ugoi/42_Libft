/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:30:33 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/17 08:53:07 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*res_cast;

	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	res = malloc(sizeof(char) * (len + 1));
	res_cast = res;
	if (!res)
		return (NULL);
	s += start;
	while (*s && len--)
		*res_cast++ = *s++;
	*res_cast = '\0';
	return (res);
}
