# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 14:20:07 by jdagoy            #+#    #+#              #
#    Updated: 2023/02/03 13:26:53 by jdagoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLACK		= $(shell tput -Txterm setaf 0)
RED			= $(shell tput -Txterm setaf 1)
GREEN		= $(shell tput -Txterm setaf 2)
YELLOW		= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	= $(shell tput -Txterm setaf 4)
PURPLE		= $(shell tput -Txterm setaf 5)
BLUE		= $(shell tput -Txterm setaf 6)
WHITE		= $(shell tput -Txterm setaf 7)
RESET		= $(shell tput -Txterm sgr0)

SRC			=		srcs/main.c \
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

LIBFT			=	libft/ft_atoi.c \
					libft/ft_memcpy.c \
					libft/ft_split.c \
					libft/ft_strdup.c \
					libft/ft_strlcpy.c \
					libft/ft_strlen.c \
					libft/ft_substr.c \
					libft/ft_isdigit.c


NAME			= push_swap

CFLAGS			= -g -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):
				@gcc ${CFLAGS} ${SRC} ${LIBFT} -o ${NAME}
				@echo "$(GREEN)********** Compiled. $(RESET)"

clean:
				@rm -f ${OBJS}
				@echo "$(PURPLE)********** Objects removed. $(RESET)"

fclean:			clean
				@rm -f $(NAME) 

				@echo "$(LIGHTPURPLE)********** Executable removed. $(RESET)"

re:				fclean all

.PHONY:		all clean fclean re 

