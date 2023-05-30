/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:55:21 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 17:16:26 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void index_init(Element **stack_a)
{
 while (*stack_a)
 {
  (*stack_a)->index == -1;
  (*stack_a) = (*stack_a)->next;
 }
 return ;
} 

void index(Element **stack_a)
{
 int i;
 int j;
 Element *tmp;

 tmp = *stack_a;
 j = 1;
 index_init(tmp);
 i = first_min(tmp);
 while(j <= ft_lst_size(*stack_a))
 {
  while (tmp)
  {
   if ((*tmp)->number == i)
    {
     tmp->index = j
     j++;
     break;
    }
    tmp = tmp->next;
  }
  tmp = *stack_a;
 }
}

