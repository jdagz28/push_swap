/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/22 23:49:04 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap(t_stack *stack)
{
    int tmp;

    if (!stack || !stack->next)
        return ;
    tmp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = tmp;
}

void    ft_push(t_stack **dest_stack, t_stack **src_stack)
{
    t_stack *tmp;

    if ((*src_stack))
        return ;
    else
    {
        tmp = (*src_stack)->next;
        ft_lstadd_front(dest_stack, *src_stack);
        (*src_stack) = tmp;
    }
}