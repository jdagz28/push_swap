# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 02:06:33 by jdagoy            #+#    #+#              #
#    Updated: 2023/02/09 15:07:10 by jdagoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar rcs
RM				= rm -f

SRC			=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isdigit.c \
				ft_memcpy.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strdup.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_substr.c \
				get_next_line.c \
				get_next_line_utils.c


OBJS = $(SRC:.c=.o)

all: $(NAME)
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS) $@ $^

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

