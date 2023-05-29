#include "push_swap.h"

int max(Element *arg)
{
    int max;

    max = arg->number;
    arg = arg->next
    while (arg)
    {
        if (arg->number > max)
            max = arg->number;
        arg = arg->next;
    }
    return (max);
}

int first_min(Element *arg)
{
    int min;

    min = arg->number;
    arg = arg->next
    while (arg)
    {
        if (arg->number < min)
            min = arg->number;
        arg = arg->next;
    }
    return (min);
}

int second_min(Element *arg)
{
    int min;
    int min2;

    min = min(arg);
    if (arg->number != min)
        min2 = arg->number;
    else
    {
        arg = arg->next;
        min2 = arg->number;
    }
    while (arg)
    {
        if (arg->number < min2 && arg->number != min)
            min2 = arg->number;
        arg = arg->next;
    }
    return (min);
}