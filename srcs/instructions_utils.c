/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/02 23:43:45 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_swap(t_stack *stack)
{
    int temp;

    temp = stack->head->next->data;
    stack->head->next->data = stack->head->next->next->data;
    stack->head->next->next->data = temp;
}

void    ft_push(t_stack *stack, int data)
{
    t_node  *new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    if(!new_node)
        return ;
    new_node->data = data;
    new_node->prev = stack->head;
    new_node->next = stack->head->next;
    stack->head->next->prev = new_node;
    stack->head->next = new_node;
    (stack->size)++;
}

void    ft_rotate(t_stack *stack)
{
    t_node  *temp;

    temp = stack->head->next;
    stack->head->next = stack->head->next->next;
    stack->head->next->prev = stack->head;
    temp->prev = stack->tail->prev;
    temp->next = stack->tail;
    stack->tail->prev->next = temp;
    stack->tail->prev = temp;
}

void    ft_reverse_rotate(t_stack *stack)
{
    t_node  *temp;

    temp = stack->tail->prev;
    stack->tail->prev = stack->tail->prev->prev;
    stack->tail->prev->next = stack->tail;
    temp->prev = stack->head;
    temp->next = stack->head->next;
    stack->head->next->prev = temp;
    stack->head->next = temp;
}

int     remove_first(t_stack *stack)
{
    t_node *r_node;
    int     r_data;
    
    if (stack->size == 0)
        return (-1);
    r_node = stack->head->next;
    r_data = stack->head->next->data;
    stack->head->next = stack->head->next->next;
    free(r_node);
    stack->head->next->prev = stack->head;
    (stack->size)--;
    return (r_data);
}