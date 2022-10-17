/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:33 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/17 08:47:47 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*res_cast;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (total_len + 1));
	res_cast = res;
	if (!res)
		return (NULL);
	while (*s1)
		*res_cast++ = *s1++;
	while (*s2)
		*res_cast++ = *s2++;
	*res_cast = '\0';
	return (res);
}
