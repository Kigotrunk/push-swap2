/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:00:48 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 19:29:29 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    all_in_b(t_element **stack_a, t_element **stack_b, int n)
{
 t_element *tmp;
 tmp = *stack_a;
 while (stack_a)
 {
  while (tmp)
  {
   if (tmp->index <= n)
   {
    pb (stack_a, stack_b);
    n++;
    opti_b(stack_b);
   }
   else
    ra(stack_a);
   tmp = tmp->next;
  }
  tmp = *stack_a;
 }
}

void    opti_b(t_element **stack_b)
{
    if (ft_lst_size(*stack_b) > 1 && ft_lst_size(*stack_b) < (*stack_b)->index)
        ra(stack_b);
}

void    big_arg(t_element **stack_a, t_element **stack_b, int n)
{
    all_in_b(stack_a, stack_b);
    while (*stack_b)
    {
        if (max(*stack_b) == (*stack_b)->number)
            pa (stack_a, stack_b);
        else
            rb(stack_b);
    }
}