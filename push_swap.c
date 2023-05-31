/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:38:37 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 18:45:32 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
    t_element *stack_a;
    t_element *stack_b;
    int     i;

    if (argc == 1)
        return (0);
    parsing(&stack_a, argc, argv);
    index(&stack_a);
    if (argc == 5)
        little_arg(&stack_a, &stack_a);
    else if (argc <= 100)
        big_arg(&stack_a, &stack_b, 20);
    else
        big_arg(&stack_a, &stack_b, 70);
}