#include "push_swap.h"

void    for_3(Element **a)
{
    if ((*a)->number == max(*a))
        ra(a);
    else if ((*a)->next->number == max(*a))
        rrab(a);
    if ((*a)->number > (*a)->next->number)
        sa(a);
    return ;
}

void    for_5(Element **a, Element **b)
{
    int min;
    int min2;

    min = first_min(*a);
    min2 = second_min(*a)
    while(ft_lst_size((*a)) > 3)
    {
        if ((*a)->number == min || (*a)->number == min2)
            pa(a, b);
        else
            ra(a);
    }
    for_3(a);
    if ((*b)->next->number > (*b)->number)
        sb(*b);
    pa(b, a);
    pa(b, a);    
}

void    little_arg(Element **a, Element **b)
{
    if (ft_lst_size(*a) == 3)
        for_3(a);
    else if (ft_lst_size(*a) == 2)
    {
        if ((*a)->number > (*a)->next->number)
            sa(*a); 
    }
    else if (ft_lst_size(*a) == 5)
        for_5(a, b);
}