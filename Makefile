# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 14:20:07 by jdagoy            #+#    #+#              #
#    Updated: 2023/02/05 01:13:10 by jdagoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		= $(shell tput -Txterm setaf 2)
YELLOW		= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	= $(shell tput -Txterm setaf 4)
RESET		= $(shell tput -Txterm sgr0)

NAME			= push_swap
BONUS			= checker

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar rcs
RM				= rm -f

SCRS_DIR		= srcs/
BSRCS_DIR		= srcs/bonus/
LIBFT_DIR		= libft/
LIBFT_NAME		= libft/libft.a

SRC				= 	main.c \
					instructions.c \
					instructions_2.c \
					instructions_3.c \
					instructions_utils.c \
					list_operations.c \
					preprocess.c \
					preprocess-sort.c \
					sort.c \
					sort_find_range.c \
					sort_utils.c \
					utils.c
					
BSRC			= checker_bonus.c \
					instructions_bonus.c \
					instructions_2_bonus.c \
					instructions_3_bonus.c \
					instructions_utils_bonus.c \
					list_operations_bonus.c \
					preprocess_bonus.c \
					preprocess-sort_bonus.c \
					utils_bonus.c

SRCS			= $(addprefix ${SRCS_DIR}, ${SRC})
BSRCS			= $(addprefix ${BSRCS_DIR}, ${BSRC})

all:			$(NAME)

bonus:			$(BONUS)

$(NAME) : $(OBJS)
			make -C $(LIBFT_DIR)
			$(CC) $(CFLAGS) $(SRCS) -L $(LIBFT_DIR) -o $(NAME)
			@echo "$(GREEN)**PUSH_SWAP** Compiled. $(RESET)"

$(BONUS) : $(BOBJS)
			make -C $(LIBFT_DIR)
			$(CC) $(CFLAGS) $(BSRCS) -L $(LIBFT_DIR) -o $(BONUS)
			@echo "$(GREEN)**PUSH_SWAP CHECKER** Compiled. $(RESET)"	

clean:
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJS) 
			@echo "$(YELLOW)**PUSH_SWAP** Objects removed. $(RESET)"

fclean:		clean
			make -C $(LIBFT_DIR) fclean
			$(RM) $(NAME) $(BONUS) 
			@echo "$(LIGHTPURPLE)**PUSH_SWAP** Executable removed. $(RESET)"

re:			fclean all

re_bonus:	fclean bonus

.PHONY:		all clean fclean re bonus re_nbonus

