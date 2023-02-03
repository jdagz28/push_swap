/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_find_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 23:40:38 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/03 13:46:54 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_location_max(t_stack *stack_a)
{
	int			index;
	t_node		*node;

	node = stack_a->head->next;
	index = 1;
	while (node->next)
	{
		if (node->data == stack_a->max)
			break ;
		index++;
		node = node->next;
	}
	if (index >= (stack_a->size + 1) / 2)
		index = (stack_a->size - index) * -1;
	return (index);
}

int	find_location_median(t_stack *stack_a, int num)
{
	int			index;
	t_node		*node;

	node = stack_a->head->next;
	index = 1;
	while (node->next->next)
	{
		if (num > node->data && num < node->next->data)
			break ;
		index++;
		node = node->next;
	}
	if (index >= (stack_a->size + 1) / 2)
		index = (stack_a->size - index) * -1;
	return (index);
}

int	find_location_min(t_stack *stack_a)
{
	int			index;
	t_node		*node;

	node = stack_a->head->next;
	index = 0;
	while (node->next)
	{
		if (node->data == stack_a->min)
			break ;
		index++;
		node = node->next;
	}
	if (index >= (stack_a->size + 1) / 2)
		index = (stack_a->size - index) * -1;
	return (index);
}

int	ft_find_location(t_stack *stack_a, int num)
{
	int	index;

	if (num < stack_a->min)
		index = find_location_min(stack_a);
	else if (num > stack_a->max)
		index = find_location_max(stack_a);
	else
		index = find_location_median(stack_a, num);
	return (index);
}
