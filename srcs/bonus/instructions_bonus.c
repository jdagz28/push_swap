/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:22 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/06 14:01:47 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

// SWAP - swap the first 2 elements
void	sa(t_stack *stack_a)
{
	if (stack_a->size < 2)
		return ;
	ft_swap(stack_a);
}

void	sb(t_stack *stack_b)
{
	if (stack_b->size < 2)
		return ;
	ft_swap(stack_b);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size < 2 || stack_b->size < 2)
		return ;
	ft_swap(stack_a);
	ft_swap(stack_b);
}

// PUSH - take the first element at the top of stack
//        and put it in the other stack
void	pa(t_stack *stack, int data)
{
	if (stack->size < -1)
		return ;
	ft_push(stack, data);
}

void	pb(t_stack *stack, int data)
{
	if (stack->size < -1)
		return ;
	ft_push(stack, data);
}
