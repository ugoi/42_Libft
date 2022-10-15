/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:12:21 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/15 23:09:32 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>
#include<unistd.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*res_cast;
	t_list	*prev_lst;

	if (!lst)
		return (NULL);
	res = malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->content = f(lst->content);
	lst = lst->next;
	prev_lst = res;
	while (lst)
	{
		res_cast = ft_lstnew(f(lst->content));
		if (!res_cast)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		prev_lst->next = res_cast;
		prev_lst = res_cast;
		lst = lst->next;
	}
	return (res);
}
