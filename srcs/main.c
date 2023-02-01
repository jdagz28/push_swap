/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:43 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/01 12:29:11 by jdagoy           ###   ########.fr       */
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