# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 14:20:07 by jdagoy            #+#    #+#              #
#    Updated: 2023/02/06 12:22:10 by jdagoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		= $(shell tput -Txterm setaf 2)
YELLOW		= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	= $(shell tput -Txterm setaf 4)
RESET		= $(shell tput -Txterm sgr0)

NAME			= push_swap
BONUS			= checker

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g
AR				= ar rcs
RM				= rm -f

LIBFT_DIR		= libft/
LIBFT_NAME		= libft/libft.a

SRCS			= 	srcs/main.c \
					srcs/instructions.c \
					srcs/instructions_2.c \
					srcs/instructions_3.c \
					srcs/instructions_utils.c \
					srcs/list_operations.c \
					srcs/preprocess.c \
					srcs/preprocess-sort.c \
					srcs/sort.c \
					srcs/sort_find_range.c \
					srcs/sort_utils.c \
					srcs/utils.c
					
BSRCS			= 	srcs/bonus/checker_bonus.c \
					srcs/bonus/instructions_bonus.c \
					srcs/bonus/instructions_2_bonus.c \
					srcs/bonus/instructions_3_bonus.c \
					srcs/bonus/instructions_utils_bonus.c \
					srcs/bonus/list_operations_bonus.c \
					srcs/bonus/preprocess_bonus.c \
					srcs/bonus/preprocess-sort_bonus.c \
					srcs/bonus/utils_bonus.c

OBJS			= $(SRCS:.c=.o)
BOBJS			= $(BSRCS:.c=.o)

all:			$(NAME)

bonus:			$(BONUS)

$(NAME) : $(OBJS)
			make -C $(LIBFT_DIR)
			$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)
			@echo "$(GREEN)**PUSH_SWAP** Compiled. $(RESET)"
			@echo "$(GREEN)Usage: ./push_swap {unsorted random numbers}. $(RESET)"

$(BONUS) : $(BOBJS)
			make -C $(LIBFT_DIR)
			$(CC) $(CFLAGS) $(BOBJS) ./libft/libft.a -o $(BONUS)
			@echo "$(GREEN)**PUSH_SWAP CHECKER** Compiled. $(RESET)"	
			@echo "$(GREEN)Usage: ./checker {unsorted random numbers} $(RESET)"	

clean:
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJS) $(BOBJS) 
			@echo "$(YELLOW)**PUSH_SWAP** Objects removed. Clean succeeded $(RESET)"

fclean:		clean
			make -C $(LIBFT_DIR) fclean
			$(RM) $(NAME) $(BONUS) 
			@echo "$(LIGHTPURPLE)Everything has been removed. $(RESET)"

re:			fclean all
			@echo "$(GREEN)**PUSH_SWAP** Recompiled. $(RESET)"	

re_bonus:	fclean bonus

leaks:		$(NAME)
			valgrind --leak-check=full ./$(NAME)

.PHONY:		all clean fclean re bonus re_bonus leaks

