/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:37:26 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/29 15:04:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>

typedef struct Element Element
{
    int     number;
    Element *next;
};

Element	lstnew(void *content, Element *next);
Element	ft_lstlast(Element *lst);
void    ft_lstadd_back(Element **lst, Element *new);
void    parsing (Element **sequence, int argc, char **argv);
void    add_Element(Element **sequence, char *arg);
void    same_number(Element *arg);
void    for_3(Element **a);
void    for_5(Element **a, Element **b);
void	all_in_b (Element *a, Element *b);
int     max(Element *arg);
int     first_min(Element *arg);
void    pb(Element **pile_a, Element **pile_b);
void    pa(Element **a, Element **b);
void	ra(Element **element_a);
void	rb(Element **element_b);
void    rr(Element **element_a, Element **element_b);
void	rrab(Element **element);
void    ss(Element *pile, Element *pile_b);
void    sb(Element *pile);
void	sa(Element *pile);
void	ft_lst_size(Element *lst);
int     second_min(Element *arg);
void    little_arg(Element **a, Element **b);


#endif
