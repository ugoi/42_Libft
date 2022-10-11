/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:53:52 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/11 12:54:41 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int argument)
{
    if ((argument >= 32 && argument <= 126))
        return (1);
    return (0);
}