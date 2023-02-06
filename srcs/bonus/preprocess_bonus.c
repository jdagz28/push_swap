/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocess_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:01 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/06 10:46:44 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	ft_index_list(int *temp, t_stack *stack_a)
{
	t_node	*node;

	node = stack_a->head->next;
	while (node->next)
	{
		node->data = ft_binary_search(temp, stack_a->size, node->data);
		node = node->next;
	}
}

int	ft_check_duplicate(int *temp, int list_len)
{
	int	i;

	i = 0;
	while (i < list_len - 1)
	{
		if (temp[i] == temp [i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_temp_insert_numbers(int *temp, t_stack *stack_a)
{
	t_node	*node;

	node = stack_a->head->next;
	while (node->next)
	{
		*temp = node->data;
		node = node->next;
		temp++;
	}
}

void	ft_preprocess(t_stack *stack_a)
{
	int	*temp;

	temp = (int *)malloc(sizeof(int) * stack_a->size);
	if (!temp)
		ft_error(stack_a, "Error\n");
	ft_temp_insert_numbers(temp, stack_a);
	ft_quick_sort(temp, 0, stack_a->size -1);
	if (ft_check_duplicate(temp, stack_a->size) == 1)
		ft_error(stack_a, "Error\n");
	ft_index_list(temp, stack_a);
	free(temp);
}
