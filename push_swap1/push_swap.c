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
    t_element   *stack_a;
    t_element   *stack_b;

    if (argc == 1)
        return (0);
    parsing(&stack_a, argc, argv);
    index_give(&stack_a);
    if (argc == 6 || argc == 4 || argc == 3)
        little_arg(&stack_a, &stack_a);
    else if (argc <= 100)
        big_arg(&stack_a, &stack_b, 15);
    else
        big_arg(&stack_a, &stack_b, 30);
    printf("two\n");
}

void    error()
{
    write (2, "error\n", 6);
    exit(EXIT_FAILURE);
}