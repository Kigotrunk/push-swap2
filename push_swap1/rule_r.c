/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:45:24 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 19:16:15 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_element **element_a)
{
	t_element *tmp;
	int							start;

	tmp = *element_a;
	start = tmp->number;
	if (!tmp || !tmp->next)
		return ;
		while (tmp->next != NULL)
		{
			tmp->number = tmp->next->number;
			tmp = tmp->next;
		}
		tmp->number = start;
	write(1, "ra", 2);
	write(1, "\n", 1);
}

void	rb(t_element **element_b)
{
		t_element *tmp;
	int							start;

	tmp = *element_b;
	start = tmp->number;
	if (!tmp || !tmp->next)
		return ;
		while (tmp->next != NULL)
		{
			tmp->number = tmp->next->number;
			tmp = tmp->next;
		}
		tmp->number = start;
	write(1, "rb", 2);
	write(1, "\n", 1);
}

void rr(t_element **element_a, t_element **element_b)
{
	ra(element_a);
	rb(element_b);
}	
