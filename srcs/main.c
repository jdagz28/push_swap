/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:43 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/23 19:45:12 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
    t_stack     *stack_a;
    t_stack     *stack_b;

    if (argc < 2 || (argc == 2 && argv[1][0] == 0))
        return (0);
    if (argc == 2)
        stack_a = ft_init_stack(ft_split(argv[1], ' '), 0);
    else
        stack_a = ft_init_stack(argv, 1);
    if (!stack_a)
        return (ft_error());
    stack_b = 0;
    ft_sort(&stack_a, &stack_b);
    ft_lstclear(stack_a);
    ft_lstclear(stack_b);
    return (0);
}