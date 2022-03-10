# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 22:41:15 by eassofi           #+#    #+#              #
#    Updated: 2022/03/10 15:10:55 by eassofi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = src/bubble_sort.c src/check_functions.c src/check_function2.c \
		src/element_algo.c src/get_functions.c src/get_functions2.c\
		src/moves.c src/push_swap.c src/push.c src/sort_10.c\
		src/sort_algo_500.c src/sort_algo.c src/sort_min.c\
		src/delete_list.c\
		
BNS = bonus/checker_bonus.c src/check_function2.c src/check_functions.c\
	  src/moves.c src/push.c bonus/get_next_line.c bonus/get_next_line_utils.c\
	  bonus/checker_bonus_utils.c\

BONUS = checker
LIB  = ./libft/libft.a
CC   = cc
FLAGS = -Wall -Wextra -Werror -Werror
NAME = push_swap 
RM = rm -rf

all: $(NAME)

$(NAME): $(LIB) $(SRCS)
		@$(CC) $(FLAGS) $(SRCS) $(LIB) -o $@
		@echo "\033[0;32mPUSH SWAP IS READY TO SORT!"
			
bonus : $(BONUS)

$(BONUS): $(BNS) $(LIB)
		@$(CC) $(FLAGS) $(BNS) $(LIB) -o $@
		@echo "\033[0;32mCHECKER CREATED"
		
$(LIB):
		@$(MAKE) -C libft
clean: 
		@$(MAKE) clean -C libft
fclean: clean
		@$(MAKE) fclean -C libft
		@$(RM) $(NAME)
		@$(RM) $(BONUS)
		@echo "\033[0;31mPUSH_SWAP HAS BEEN DELETED"
re: fclean all