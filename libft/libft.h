/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:09:01 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/06 13:49:29 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>		

# ifndef BUFFER_SIZE
#   define BUFFER_SIZE 1
#endif

typedef struct s_node
{
    int             data;
    struct s_node   *prev;
    struct s_node   *next;
}   t_node;

typedef struct s_stack
{
    t_node  *head;
    t_node  *tail;
    int     size;
    int     min;
    int     max;
}   t_stack;

//libft
int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//get_next_line
char	*get_next_line(int fd);
char	*ft_gnl_strjoin(char const *s1, char const *s2);
char	*ft_gnl_strdup(const char *s1);
char	*ft_gnl_strchr(const char *s, int c);
char	*ft_gnl_substr(char const *s, unsigned int start, size_t len);

//error manager
void	ft_error(t_stack *stack, char *error);
void	ft_lstclear(t_stack *lst);

#endif
