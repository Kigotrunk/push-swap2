/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:11:42 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 19:16:04 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rrab(Element **element)
{
	Element	*tmp2;
	Element *pile;
	Element *last;

	pile = *element;
	if (!(pile && pile->next))
		return (0);
	last = pile;
	while (last->next)
	{
		tmp2 = last;
		last = last->next;
	}
	last->next = pile;
	tmp2->next = NULL;
	*element = tmp2;
}
