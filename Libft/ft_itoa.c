/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:45:07 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/15 23:31:03 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_numlen(int n)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

int	ft_amount(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nlen;

	nlen = ft_numlen(n);
	res = malloc(sizeof(char) * nlen + 1);
	res += nlen;
	*res-- = '\0';
	*res-- = ft_amount(n % 10) + '0';
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		*res-- = ft_amount(n % 10) + '0';
	}
	if (n < 0)
		*res = '-';
	else
		res++;
	return (res);
}
