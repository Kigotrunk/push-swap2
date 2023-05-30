/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:55:33 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 12:55:37 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    parsing (Element **sequence, int argc, char **argv)
{
    int nb_arg;
    int j;

    nb_arg = argc - 1;
    while (nb_arg > 0)
    {
        add_Element(*sequence, argv[nb_arg]);
        nb_arg--;
    }

}

void    add_Element(Element **sequence, char *arg)
{
    int i;

    if(!arg[0])
        EXIT_FAILURE;
    i = ft_atoi(arg);
    if (arg[0] != '-' && i < 0)  
        EXIT_FAILURE;
    *sequence = lstnew(i, *sequence);        
}

void    same_number(Element *arg)
{
    Element temp;
    Element temp1;
    int     nb_of_same;

    temp = arg;
    while(temp)
    {
        nb_of_same == 0;
        temp1 = temp;
        while (temp1)
        {                 
            if(temp1->number == temp->number)
            {
                nb_of_same++;
                if (nb_of_same >=2)
                    EXIT_FAILURE;
            }
        }
        temp1 = temp1->next;
    }
}
