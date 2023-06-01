/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_little.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:54:09 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 16:54:09 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    for_3(t_element **a)
{
    printf("ok\n");
    if ((*a)->number == max(*a))
        ra(a);
    else if ((*a)->next->number == max(*a))
        rrab(a);
    if ((*a)->number > (*a)->next->number)
        sa(a);
    return ;
}

void    for_5(t_element **a, t_element **b)
{
    int min;
    int min2;
    int x;

    min = first_min(*a);
    min2 = second_min(*a);
    x = 0;
    while(x < 2)
    {
        if ((*a)->number == min || (*a)->number == min2)
        {
            pa(a, b);
            x++;
        }
        else
            ra(a);
    }
    for_3(a);
    if ((*b)->next->number > (*b)->number)
        sb(b);
    pa(a, b);
    pa(a, b);    
}

void    little_arg(t_element **a, t_element **b)
{
    if (ft_lst_size(*a) == 3)
        for_3(a);
    else if (ft_lst_size(*a) == 2)
    {
        if ((*a)->number > (*a)->next->number)
            sa(a); 
    }
    else if (ft_lst_size(*a) == 5)
        for_5(a, b);
    return ;
}