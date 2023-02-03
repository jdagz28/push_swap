/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:25:19 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/03 16:03:01 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_check_rev_rotate(char *line, t_stack *stack_a, t_stack *stack_b);
int     ft_check_rotate(char *line, t_stack *stack_a, t_stack *stack_b);
int     ft_check_push(char *line, t_stack *stack_a, t_stack *stack_b);
int     ft_check_swap(char *line, t_stack *stack_a, t_stack *stack_b);
int     ft_sort_checker(char *line, t_stack *stack_a, t_stack *stack_b);
