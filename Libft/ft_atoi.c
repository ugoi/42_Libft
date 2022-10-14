/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:36:05 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/14 13:18:38 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] <= '\n' || str[i] <= '\r' || str[i] <= '\t'
		|| str[i] <= '\f' || str[i] <= '\v' || str[i] <= ' ')
		i++;

	if (str[i] == '-' || str[i] == '+')
    {
		if (str[i] == '-')
			sign *= -1;
		i++;   
    }
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}
