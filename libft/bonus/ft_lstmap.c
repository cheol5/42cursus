/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:45:05 by coh               #+#    #+#             */
/*   Updated: 2022/07/12 15:45:05 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *data;
	data = (t_list *)malloc(sizeof(t_list));
	if (!data)
		return (0);
	data->content = content;
	return (data);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *plate
	t_list *_lst;

	_lst = lst;
	if (!lst)
		return (0);
	while(lst)
	{
		plate = ft_lstnew(f(lst->content));
		ft_lstadd_front(&_lst, plate);
		lst = lst->next;
	}
}