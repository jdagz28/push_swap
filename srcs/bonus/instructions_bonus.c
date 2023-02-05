/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:22 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/05 01:04:58 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

// SWAP - swap the first 2 elements
void	sa(t_stack *stack_a)
{
	ft_swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	ft_swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	write(1, "ss\n", 3);
}

// PUSH - take the first element at the top of stack
//        and put it in the other stack
void	pa(t_stack *stack, int data)
{
	ft_push(stack, data);
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack, int data)
{
	ft_push(stack, data);
	write(1, "pb\n", 3);
}
