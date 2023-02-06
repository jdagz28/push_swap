/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_3_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:14:59 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/06 14:02:21 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size < 1 || stack_b->size < 1)
		return ;
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
}

int	remove_first(t_stack *stack)
{
	t_node		*r_node;
	int			data;

	if (stack->size == 0)
		return (-1);
	r_node = stack->head->next;
	data = stack->head->next->data;
	stack->head->next = stack->head->next->next;
	free(r_node);
	stack->head->next->prev = stack->head;
	(stack->size)--;
	return (data);
}
