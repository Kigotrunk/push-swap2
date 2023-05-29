/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:53:12 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/29 12:50:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Element	*lstnew(void *content, Element *next)
{
	Element	*lst;

	if (!lst = malloc(sizeof(Element)))
		return NULL;
	lst->number = content;
	lst->next = next;
	return (lst);
}

Element	*ft_lstlast(Element *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(Element **lst, Element *new)
{
	Element	*lstb;

	if(!(*lst))
	{
		*lst = new;
		return ;
	}
	lstb = ft_lstlast(*lst);
	lstb->next = new;
	new->next = NULL;
}

void	ft_lst_size(Element *lst)
{
	int	size;

	if(!lst)
		EXIT_FAILURE;
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next
	}
	return (size);
}
