/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:11:42 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/28 23:14:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rrab(Element **element)
{
	Element	*tmp2;
	Element *pile;
	Element *last;

	pile = *element;
	if (!(pile && pile->suivant))
		return (0);
	last = pile;
	while (last->next)
	{
		tmp2 = last;
		last = last->suivant;
	}
	last->suivant = pile;
	tmp2->suivant = NULL;
	*element = tmp2;
}
