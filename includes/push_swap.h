/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:20:07 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/28 00:47:49 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

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

//initialize stack
void    ft_init_stack(t_stack **stack)


//instructions
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);
void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_a, t_stack **stack_b);
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);
void    rra(t_stack **stack_a);
void    rrb(t_stack **stack_b);
void    rrr(t_stack **stack_a, t_stack **stack_b);
// void    ft_swap(t_stack *stack);
// void    ft_push(t_stack **dest_stack, t_stack **src_stack);
// void    ft_rotate(t_stack **stack);
// void    ft_reverse_rotate(t_stack **stack);

//utils


//libft
int	ft_atoi(const char *str, int *atoi_error);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst);
void	ft_lstdelone(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(void *content);
int	ft_lstsize(t_stack *lst);

void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif