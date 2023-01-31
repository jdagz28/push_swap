/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:43 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/31 23:13:30 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "stdio.h"

int main(int argc, char **argv)
{
    t_stack     *stack_a;

    if (argc < 2)
        return (1);
    ft_init_stack(&stack_a);
    ft_insert_numbers(stack_a, argc, argv);
    ft_preprocess(stack_a);
    ft_sort(stack_a);
    return (0);
}

// void	list_free(t_list *list)
// {
// 	t_node	*temp;

// 	while (list->head)
// 	{
// 		temp = list->head->next;
// 		free(list->head);
// 		list->head = temp;
// 	}
// 	free(list);
// }