/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:45:24 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/29 12:49:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(Element **element_a)
{
	int	tmp;

	tmp = (*element_a)->nombre;

	while ((*element_a)->suivant)
	{
		(*element_a)->nombre = (*element_a)->suivant->nombre;
		(*element_a) = (*element_a)->suivant
	}
	(*element_a)->nombre = tmp;
}

void	rb(Element **element_b)
{
	int tmp;

	tmp = (*element_b)->nombre;
	while ((*element_b)->suivant)
	{
		(*element_b)->nombre = (*element_b)->suivant->nombre;
		(*element_b) = (*element_b)->suivant;
	}
	(*element_b)->nombre = tmp;
}

void rr(Element **element_a, Element **element_b)
{
	ra(element_a);
	rb(element_b);
}	
