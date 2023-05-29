/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:04:36 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/29 12:49:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(Element **lst, int Nvnombre)
{
        Element *new_element = malloc(sizeof new_element);
        if (new_element != NULL)
        {
			new_element->nombre = Nvnombre;
			(*new_element)->suivant = *lst;
			*lst = new_element;
        }
}

int pop(Element **lst)
{
    int	tmp;

	tmp = 0;
    if (lst != NULL)
    {
        Element *temp = (*lst)->suivant;
        tmp = (*lst)->nombre;
        free(*lst);
		*lst = NULL;
        *lst = temp;
    }
    return tmp;
}

void    pa(Element **a, Element **b)
{
	int	tmp;

	tmp = 0;
	tmp = pop(b);
	push(a, tmp);
}

void    pb(Element **a, Element **b)
{
	int first_a;

	first_a = 0;
	first_a = pop(a);
	push(b, first_a);
}
