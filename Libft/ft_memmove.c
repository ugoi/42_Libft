/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:31:00 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/11 16:57:49 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t len)
{
  char *d = dest;
  const char *s = src;
  if (d < s)
  {
    printf("Hello\n");
    while (len--)
      *d++ = *s++; 
  }
  else
    {
      printf("Mello\n");
      const char *lasts = s + (len-1);
      char *lastd = d + (len-1);
      while (len--)
        *lastd-- = *lasts--;
    }
  return dest;
}