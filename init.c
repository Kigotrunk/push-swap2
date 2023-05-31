/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:53:12 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 19:00:33 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*lstnew(void *content, t_element *next)
{
	t_element	*lst;

	if (!lst = malloc(sizeof(t_element)))
		return NULL;
	lst->number = content;
	lst->next = next;
	return (lst);
}

t_element	*ft_lstlast(t_element *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_element **lst, t_element *new)
{
	t_element	*lstb;

	if(!(*lst))
	{
		*lst = new;
		return ;
	}
	lstb = ft_lstlast(*lst);
	lstb->next = new;
	new->next = NULL;
}

int	ft_lst_size(t_element *lst)
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
