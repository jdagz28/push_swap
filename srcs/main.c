/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:43 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/12 21:42:37 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*stack_a;

	if (argc < 2 || (argc == 2 && argv[1][0] == 0))
		return (1);
	ft_init_stack(&stack_a);
	ft_insert_numbers(stack_a, argc, argv);
	if (!stack_a->head->data && !stack_a->size)
		ft_error(stack_a, "Error\n");
	ft_preprocess(stack_a);
	ft_sort(stack_a);
	ft_lstclear(stack_a);
	return (0);
}
