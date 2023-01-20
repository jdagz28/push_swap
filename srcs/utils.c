/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/20 22:26:18 by jdagoy           ###   ########.fr       */
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

