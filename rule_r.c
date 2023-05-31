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
	int	tmp;

	tmp = (*element_a)->number;

	while ((*element_a)->next)
	{
		(*element_a)->number = (*element_a)->next->number;
		(*element_a) = (*element_a)->next
	}
	(*element_a)->number = tmp;
}

void	rb(t_element **element_b)
{
	int tmp;

	tmp = (*element_b)->number;
	while ((*element_b)->next)
	{
		(*element_b)->number = (*element_b)->next->number;
		(*element_b) = (*element_b)->next;
	}
	(*element_b)->number = tmp;
}

void rr(t_element **element_a, t_element **element_b)
{
	ra(element_a);
	rb(element_b);
}	
