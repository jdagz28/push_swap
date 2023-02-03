/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 01:52:29 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/03 14:18:33 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_last_sort(t_stack *stack_a)
{
	int	index;

	index = find_location_min(stack_a);
	while (index)
	{
		if (index > 0)
		{
			ra(stack_a);
			index--;
		}
		else
		{
			rra(stack_a);
			index++;
		}
	}
}

void	update_range(t_stack *stack_a)
{
	int	num;

	num = stack_a->head->next->data;
	if (stack_a->min > num)
		stack_a->min = num;
	else if (stack_a->max < num)
		stack_a->max = num;
}

int	abs_sum(int num_a, int num_b)
{
	if (num_a < 0)
		num_a *= -1;
	if (num_b < 0)
		num_b *= -1;
	return (num_a + num_b);
}

void	ft_rotate_list(t_stack *stack_a, t_stack *stack_b, \
											int index_a, int index_b)
{
	while ((index_a > 0 && index_b > 0) && index_a-- && index_b--)
		rr(stack_a, stack_b);
	while ((index_a < 0 && index_b < 0) && index_a++ && index_b++)
		rrr(stack_a, stack_b);
	while (index_a > 0)
	{	
		ra(stack_a);
		index--;
	}
	while (index_a < 0)
	{
		rra(stack_a);
		idnex_a++;
	}
	while (index_b > 0)
	{	
		rb(stack_b);
		index_b--;
	}
	while (index_b < 0)
	{	
		rrb(stack_b);
		index_b++;
	}
}
