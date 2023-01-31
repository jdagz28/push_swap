/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:27 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/31 22:45:03 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_b_to_a(t_stack *stack_a, t_stack *stack_b, t_node *node_b)
{
    int     i;
    int     index_a;
    int     index_b;
    int     min_a;
    int     min_b;

    i = 0;
    while (i++ < stack_b->size)
    {
        index_a = ft_find_location(stack_a, node_b->data);
        if (i >= (stack_b->size + 1) / 2)
            index_b = (stack_b->size - i) * -1;
        else
            index_b = i;
        if (i == 0 || abs_sum(min_a, min_b) > abs_sum(index_a, index_b))
        {
            min_a = index_a;
            min_b = index_b;
        }
        node_b = node_b->next;
    }
    ft_rotate_list(stack_a, stack_b, min_a, min_b);
    pa(stack_a, remove_first(stack_b));
    update_range(stack_a);
}

void    ft_divide_three(t_stack *stack_a, t_stack *stack_b, int list_size)
{
    int     top_index;
    int     group_size;

    top_index = stack_a->head->next->data;
    group_size = list_size / 3;
    while (stack_a->size > group_size + list_size % 3)
    {
        if (group_size > top_index)
        {
            pb(stack_b, remove_first(stack_a));
            rb(stack_b);
        }
        else if (group_size <= top_index && group_size * 2 > top_index)
            pb(stack_b, remove_first(stack_a));
        else
            ra(stack_a);
        top_index = stack_a->head->next->data;
    }
}

int is_already_sorted(t_stack *stack_a)
{
    t_node  *node;

    node = stack_a->head->next;
    while (node->next->next)
    {
        if (node->data > node->next->data)
            return (0);
        node = node->next;
    }
    return (1);
}

void    ft_sort_three(t_stack *stack)
{
        int top;
        int mid;
        int bottom;
        
        top = stack->head->next->data;
        mid = stack->head->next->next->data;
        bottom = stack->head->next->next->next->data;
        if (mid > top && mid > bottom && bottom > top)
        {
            sa(stack);
            ra(stack);
        }
        else if (top > mid && mid > bottom && top > bottom)
        {
            sa(stack);
            rra(stack);
        }
        else if (top > mid && bottom > mid && bottom > top)
            sa(stack);
        else if (mid > top && mid > bottom && top > bottom)
            rra(stack);
        else if (top > mid && bottom > mid && top > bottom)
            ra(stack);
}

void    ft_sort(t_stack *stack_a)
{
    t_stack *stack_b;

    if (stack_a->size == 3)
        ft_sort_three(stack_a);
    if (is_already_sorted(stack_a) == 1)
        return ;
    ft_init_stack(&stack_b);
    ft_divide_three(stack_a, stack_b, stack_a->size);
    while (stack_a->size > 3)
        pb(stack_b, remove_first(stack_a));
    if (stack_a->size == 2)
        if (stack_a->head->next->data > stack_a->tail->prev->data)
            sa(stack_a);
    if (stack_a-> size == 3)
        ft_sort_three(stack_a);
    stack_a->min = stack_a->head->next->data;
    stack_a->max = stack_a->tail->prev->data;
    while (stack_b->size > 0)
        ft_b_to_a(stack_a, stack_b, stack_b->head->next);
    ft_last_sort(stack_a);
    ft_lstclear(&stack_b);
}