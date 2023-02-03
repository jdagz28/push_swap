# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 02:06:33 by jdagoy            #+#    #+#              #
#    Updated: 2023/02/03 16:09:21 by jdagoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
		ft_isdigit.c \
		ft_memcpy.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strdup.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_substr.c 


OBJ = $(SRC:.c=.o)

all: $(NAME)
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ)
		@ar rcs $(NAME) $(OBJ)

bonus: $(OBJ)
		@ar rcs $(NAME) $(OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

