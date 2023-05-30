/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:04:36 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 19:16:04 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_element **lst, int Nvnombre)
{
        t_element *new_element = malloc(sizeof new_element);
        if (new_element != NULL)
        {
			new_element->number = Nvnombre;
			(*new_element)->next = *lst;
			*lst = new_element;
        }
}

int pop(t_element **lst)
{
    int	tmp;

	tmp = 0;
    if (lst != NULL)
    {
        t_element *temp = (*lst)->next;
        tmp = (*lst)->number;
        free(*lst);
		*lst = NULL;
        *lst = temp;
    }
    return tmp;
}

void    pa(t_element **a, t_element **b)
{
	int	tmp;

	tmp = 0;
	tmp = pop(b);
	push(a, tmp);
}

void    pb(t_element **a, t_element **b)
{
	int first_a;

	first_a = 0;
	first_a = pop(a);
	push(b, first_a);
}
