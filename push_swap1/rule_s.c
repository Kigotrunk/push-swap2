/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:49:21 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 18:45:32 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_element *pile)
{
	int	tmp;

	if(!pile)
		return ;
	tmp = pile->nombre;
	pile->nombre = pile->suivant->nombre;
	pile->suivant->nombre = tmp;
}

void	sa(t_element *pile)
{
	swap(pile);
	write(1, "sa", 2);
	write(1, '\n', 1);
}

void sb(t_element *pile)
{
	swap(pile);
	write(1, "sb", 2);
	write(1, '\n', 1);
}

void ss(t_element *pile, t_element *pile_b)
{
	sa(pile);
	sb(pile_b);
}
