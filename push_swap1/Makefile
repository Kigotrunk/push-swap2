# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 12:03:07 by kortolan          #+#    #+#              #
#    Updated: 2023/06/01 12:26:25 by kortolan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = gcc -Wall -Wextra -Werror -o
NAME = push_swap
 
SRC = 	push_swap.c algo_for_big.c algo_for_little.c index.c info.c init.c parsing.c rule_p.c rule_r.c rule_rr.c rule_s.c


all: $(NAME) $(NAME2)
$(NAME):
	@$(MAKE) -C libft/ re
	$(CFLAGS) $(NAME) $(SRC) -L libft/ -lft



clean:
	@$(MAKE) -C libft/ clean

fclean: fclean
	rm -f $(NAME)
	@$(MAKE) -C libft/ fclean

re: fclean all
