/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:34:02 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/13 19:33:29 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int argument)
{
    if ((argument >= 0 && argument <= 127))
        return (1);
    return (0);
}