/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/27 23:45:23 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void    ft_swap(t_stack *stack)
// {
//     int tmp;

//     if (!stack || !stack->next)
//         return ;
//     tmp = stack->value;
//     stack->value = stack->next->value;
//     stack->next->value = tmp;
// }

// void    ft_push(t_stack **dest_stack, t_stack **src_stack)
// {
//     t_stack *tmp;

//     if ((*src_stack))
//         return ;
//     else
//     {
//         tmp = (*src_stack)->next;
//         ft_lstadd_front(dest_stack, *src_stack);
//         (*src_stack) = tmp;
//     }
// }

// void    ft_rotate(t_stack **stack)
// {
//     t_stack *tmp;
//     if (!*stack || !(*stack)->next)
//         return ;
//     tmp = *stack;
//     *stack = (*stack)->next;
//     tmp->next = NULL;
//     ft_lstadd_back(stack, tmp->next);
//     tmp->next = NULL;
// }

// void    ft_reverse_rotate(t_stack **stack)
// {
//     t_stack *tmp;
//     t_stack *last_entry;

//     if (!*stack || !(*stack)->next)
//         return ;
//     tmp = *stack;
//     while (tmp->next && tmp->next->next)
//         tmp = tmp->next;
//     last_entry = tmp->next;
//     tmp->next = NULL;
//     last_entry->next = *stack;
//     *stack = last_entry;
// }