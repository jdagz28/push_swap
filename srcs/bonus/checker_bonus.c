/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:25:19 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/07 09:35:39 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int	ft_sort_checker(char *line, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strncmp(line, "sa\n", ft_strlen(line)) == 0)
		sa(stack_a);
	else if (ft_strncmp(line, "sb\n", ft_strlen(line)) == 0)
		sb(stack_b);
	else if (ft_strncmp(line, "ss\n", ft_strlen(line)) == 0)
		ss(stack_a, stack_b);
	else if (ft_strncmp(line, "pa\n", ft_strlen(line)) == 0)
		pa(stack_a, remove_first(stack_b));
	else if (ft_strncmp(line, "pb\n", ft_strlen(line)) == 0)
		pb(stack_b, remove_first(stack_a));
	else if (ft_strncmp(line, "ra\n", ft_strlen(line)) == 0)
		ra(stack_a);
	else if (ft_strncmp(line, "rb\n", ft_strlen(line)) == 0)
		rb(stack_b);
	else if (ft_strncmp(line, "rr\n", ft_strlen(line)) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(line, "rra\n", ft_strlen(line)) == 0)
		rra(stack_a);
	else if (ft_strncmp(line, "rrb\n", ft_strlen(line)) == 0)
		rrb(stack_b);
	else if (ft_strncmp(line, "rrr\n", ft_strlen(line)) == 0)
		rrr(stack_a, stack_b);
	else
		return (-1);
	return (0);
}	

static int	ft_read_instructions(t_stack *stack_a, t_stack *stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!line)
			break ;
		if (ft_sort_checker(line, stack_a, stack_b) == -1)
			return (-1);
		free(line);
		line = get_next_line(0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (argc < 2)
		return (1);
	ft_init_stack(&stack_a);
	ft_init_stack(&stack_b);
	ft_insert_numbers(stack_a, argc, argv);
	if (!stack_a->head->data && !stack_a->size)
		ft_checker_error(stack_a, stack_b, "Error\n");
	ft_preprocess(stack_a);
	if (ft_read_instructions(stack_a, stack_b) == -1)
		ft_checker_error(stack_a, stack_b, "Error\n");
	else if (is_already_sorted(stack_a) && stack_b->size == 0)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	return (0);
}
