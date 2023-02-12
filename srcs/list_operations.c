/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:43 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/12 19:20:29 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_last(t_stack *stack, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		ft_error(stack, "Error\n");
	new_node->data = data;
	new_node->prev = stack->tail->prev;
	new_node->next = stack->tail;
	stack->tail->prev->next = new_node;
	stack->tail->prev = new_node;
	(stack->size)++;
}

void	ft_insert_numbers(t_stack *stack_a, int argc, char **argv)
{
	int		i;
	char	**numbers;
	int		num;
	int		error;

	error = 0;
	while (--argc)
	{
		if (**(++argv) == '\0')
			ft_error(stack_a, "Error\n");
		numbers = ft_split(*argv, ' ');
		i = 0;
		if (!numbers || !numbers[i])
			ft_error(stack_a, "Error\n");
		while (numbers[i])
		{
			num = ft_atoi(numbers[i++], &error);
			ft_add_last(stack_a, num);
		}
		ft_numtab_error(error, stack_a, numbers);
		ft_free_array(numbers);
	}
}

void	ft_init_stack(t_stack **stack)
{
	*stack = (t_stack *)malloc(sizeof(t_stack));
	if (!*stack)
		ft_error(*stack, "Error\n");
	(*stack)->head = (t_node *)malloc(sizeof(t_node));
	(*stack)->tail = (t_node *)malloc(sizeof(t_node));
	if (!(*stack)->head || !(*stack)->tail)
		ft_error(*stack, "Error\n");
	(*stack)->head->prev = NULL;
	(*stack)->head->next = (*stack)->tail;
	(*stack)->tail->next = NULL;
	(*stack)->tail->prev = (*stack)->head;
	(*stack)->head->data = 0;
	(*stack)->min = 0;
	(*stack)->max = 0;
	(*stack)->size = 0;
}
