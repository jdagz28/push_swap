/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:43 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/24 21:27:24 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "stdio.h"

int main(int argc, char **argv)
{
    t_stack     *stack_a;
    // t_stack     *stack_b;

    if (argc < 2 || (argc == 2 && argv[1][0] == 0))
        return (0);
    if (argc == 2)
        stack_a = ft_init_stack(ft_split(argv[1], ' '));
    else
        stack_a = ft_init_stack(argv);
    // if (!stack_a)
    //     return (ft_error());
    //test print stack entrys
    while (stack_a)
    {
        printf("%d", stack_a->value);
        stack_a = stack_a->next;
    }

    // stack_b = 0;
    // ft_sort(&stack_a, &stack_b);
    // ft_lstclear(stack_a);
    // ft_lstclear(stack_b);

    return (0);
}