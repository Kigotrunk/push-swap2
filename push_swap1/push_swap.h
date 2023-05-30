/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:37:26 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/30 18:48:09 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>


typedef struct s_element
{
    int     number;
	int		index;
    struct  s_element *next;
} t_element; 

t_element	*lstnew(void *content, t_element *next);
t_element	*ft_lstlast(t_element *lst);
void    ft_lstadd_back(t_element **lst, t_element *new);
void    parsing (t_element **sequence, int argc, char **argv);
void    add_Element(t_element **sequence, char *arg);
void    same_number(t_element *arg);
void    for_3(t_element **a);
void    for_5(t_element **a, t_element **b);
void	all_in_b (t_element *a, t_element *b);
int     max(t_element *arg);
int     first_min(t_element *arg);
void    pb(t_element **pile_a, t_element **pile_b);
void    pa(t_element **a, t_element **b);
void	ra(t_element **element_a);
void	rb(t_element **element_b);
void    rr(t_element **element_a, t_element **element_b);
void	rrab(t_element **element);
void    ss(t_element *pile, t_element *pile_b);
void    sb(t_element *pile);
void	sa(t_element *pile);
int     ft_lst_size(t_element *lst);
int     second_min(t_element *arg);
void    little_arg(t_element **a, t_element **b);


#endif
