/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:38:37 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/29 15:10:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
    Element *stack_a;
    Element *stack_b;
    int     i;

    if (argc == 1)
        return (0);
    parsing(&stack_a, argc, argv);
    if (argc <= 5)
        little_arg((*stack_a), (*stack_a));
    
}