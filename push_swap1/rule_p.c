/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:08:22 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/01 18:01:51 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	push(t_list **stack_src, t_list **stack_dest, char s)
{
	t_list	*temp;

	if (!*stack_src)
		return ;
	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	temp->next = NULL;
	ft_lstadd_front(stack_dest, temp);
	if (s == 'a')
		ft_putendl_fd("pa", 1);
	if (s == 'b')
		ft_putendl_fd("pb", 1);
}

 write(1, "pa\n", 3);
 return ;
}

void pb(t_element **stack_b, t_element **stack_a)
{
 t_element *a;
 t_element *b;
 t_element *tmp;

 a = *stack_b;
 b = *stack_a;
 if (!b)
  return ;
 tmp = b;
 b = b->next;
 *stack_a = b;
 if (!a)
 {
  a = tmp;
  a->next = NULL;
  *stack_b = a;
 }
 else
 {
  tmp->next = a;
  *stack_b = tmp;
 }
 write(1, "pb\n", 3);
 return ;
}
