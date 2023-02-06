/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:54:29 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/06 14:02:14 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

// ROTATE - shift up all element of stack by 1
void	ra(t_stack *stack_a)
{
	if (stack_a->size < 1)
		return ;
	ft_rotate(stack_a);
}

void	rb(t_stack *stack_b)
{
	if (stack_b->size < 1)
		return ;
	ft_rotate(stack_b);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size < 1 || stack_b->size < 1)
		return ;
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

// REVERSE ROTATE - shift down all elements of stack by 1
void	rra(t_stack *stack_a)
{
	if (stack_a->size < 1)
		return ;
	ft_reverse_rotate(stack_a);
}

void	rrb(t_stack *stack_b)
{
	if (stack_b->size < 1)
		return ;
	ft_reverse_rotate(stack_b);
}
