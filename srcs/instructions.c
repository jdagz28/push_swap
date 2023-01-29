/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:22 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/28 23:36:37 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// SWAP - swap the first 2 elements
void    sa(t_stack *stack_a)
{
    ft_swap(stack_a);
    write(1, "sa\n", 3);
}

void    sb(t_stack *stack_b)
{
    ft_swap(stack_b);
    write(1, "sb\n", 3);
}

void    ss(t_stack *stack_a, t_stack *stack_b)
{
    ft_swap(stack_a);
    ft_swap(stack_b);
    write(1, "ss\n", 3);
}

// PUSH - take the first element at the top of stack and put it in the other stack
void    pa(t_stack *stack_a, t_stack *stack_b)
{
    ft_push(stack_b, stack_a);
    write(1, "pa\n", 3);
}

void    pb(t_stack *stack_a, t_stack *stack_b)
{
    ft_push(stack_a, stack_b);
    write(1, "pb\n", 3);
}

// ROTATE - shift up all element of stack by 1
void    ra(t_stack *stack_a)
{
    ft_rotate(stack_a);
    write(1, "ra\n", 3);
}

void    rb(t_stack *stack_b)
{
    ft_rotate(stack_b);
    write(1, "rb\n", 3);
}

void    rr(t_stack *stack_a, t_stack *stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    write(1, "rr\n", 3);
}

// REVERSE ROTATE - shift down all elements of stack by 1
void    rra(t_stack **stack_a)
{
    ft_reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}

void    rrb(t_stack **stack_b)
{
    ft_reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}

void    rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    write(1, "rrr\n", 4);
}