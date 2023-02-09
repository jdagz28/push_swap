/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:20:07 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/08 11:26:40 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

//list operations
void	ft_init_stack(t_stack **stack);
void	ft_insert_numbers(t_stack *stack_a, int argc, char **argv);
void	ft_add_last(t_stack *stack, int data);

//instructions
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

//instructions-utils
void	ft_swap(t_stack *stack);
void	ft_push(t_stack *stack, int data);
void	ft_rotate(t_stack *stack);
void	ft_reverse_rotate(t_stack *stack);
int		remove_first(t_stack *stack);

//preprocess
void	ft_preprocess(t_stack *stack_a);
void	ft_temp_insert_numbers(int *temp, t_stack *stack_a);
int		ft_check_duplicate(int *temp, int list_len);
void	ft_index_list(int *temp, t_stack *stack_a);
int		ft_check_duplicate(int *temp, int list_len);

//preprocess - sort
void	ft_quick_sort(int *array, int left, int right);
int		ft_binary_search(int *array, int len, int target);

//sort
void	ft_sort(t_stack *stack_a);
void	ft_sort_three(t_stack *stack);
int		is_already_sorted(t_stack *stack_a);
void	ft_divide_three(t_stack *stack_a, t_stack *stack_b, int list_size);
void	ft_b_to_a(t_stack *stack_a, t_stack *stack_b, t_node *node_b);

//sort - find range
int		ft_find_location(t_stack *stack_a, int num);
int		find_location_min(t_stack *stack_a);
int		find_location_median(t_stack *stack_a, int num);
int		find_location_max(t_stack *stack_a);

//sort - utils
void	ft_rotate_list(t_stack *stack_a, t_stack *stack_b, \
										int index_a, int index_b);
void	update_range(t_stack *stack_a);
int		abs_sum(int num_a, int num_b);
void	ft_last_sort(t_stack *stack_a);

//utils
void	ft_error(t_stack *stack, char *error);
void	ft_free_array(char **str);
void	ft_lstclear(t_stack *lst);
void	ft_numtab_error(int error, t_stack *stack_a, char **numbers);
#endif
