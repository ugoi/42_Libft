/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:37:37 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 08:46:34 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char * s1_cast;
    const char * s2_cast;

    s1_cast = s1;
    s2_cast = s2;
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1_cast[i] != '\0') && (s2_cast[i] != '\0')
		&& (s1_cast[i] == s2_cast[i]) && i < (n - 1))
		i++;
	return (s1_cast[i] - s2_cast[i]);
}
