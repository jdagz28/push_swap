/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:25:19 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/12 22:21:07 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
	int		min;
	int		max;
}	t_stack;

int		ft_sort_checker(char *line, t_stack *stack_a, t_stack *stack_b);

void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack, int data);
void	pb(t_stack *stack, int data);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
int		remove_first(t_stack *stack);
void	ft_swap(t_stack *stack);
void	ft_push(t_stack *stack, int data);
void	ft_rotate(t_stack *stack);
void	ft_reverse_rotate(t_stack *stack);

void	ft_init_stack(t_stack **stack);
void	ft_insert_numbers(t_stack *stack_a, int argc, char **argv);
void	ft_add_last(t_stack *stack, int data);

void	ft_preprocess(t_stack *stack_a);
void	ft_temp_insert_numbers(int *temp, t_stack *stack_a);
int		ft_check_duplicate(int *temp, int list_len);
void	ft_index_list(int *temp, t_stack *stack_a);

void	ft_quick_sort(int *array, int left, int right);
int		ft_binary_search(int *array, int len, int target);

void	ft_error(t_stack *stack, char *error);
void	ft_free_array(char **str);
void	ft_lstclear(t_stack *lst);
void	ft_checker_error(t_stack *stack_a, t_stack *stack_b, char *error);
int		is_already_sorted(t_stack *stack_a);
void	ft_numtab_error(int error, t_stack *stack_a, char **numbers);

#endif
