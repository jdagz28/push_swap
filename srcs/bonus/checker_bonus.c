/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:25:19 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/05 01:04:49 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int     ft_check_rev_rotate(char *line, t_stack *stack_a, t_stack *stack_b)
{
    if (ft_strncmp(line, "rra\n", ft_strlen(line)) == 0)
        rra(stack_a);
    else if (ft_strncmp(line, "rrb\n", ft_strlen(line)) == 0)
        rrb(stack_b);
    else if (ft_strncmp(line, "rrr\n", ft_strlen(line)) == 0)
        rrr(stack_a, stack_b);
    else
        return (-1);
    return (0);
}

int    ft_check_rotate(char *line, t_stack *stack_a, t_stack *stack_b)
{
    if (ft_strncmp(line, "ra\n", ft_strlen(line)) == 0)
        ra(stack_a);
    else if (ft_strncmp(line, "rb\n", ft_strlen(line)) == 0)
        rb(stack_b);
    else if (ft_strncmp(line, "rr\n", ft_strlen(line)) == 0)
        rr(stack_a, stack_b);
    else
        return (-1);
    return (0);
}

int    ft_check_push(char *line, t_stack *stack_a, t_stack *stack_b)
{
    if (ft_strncmp(line, "pa\n", ft_strlen(line)) == 0)
        if (stack_a->size > 1)
            pa(stack_a);
    else if (ft_strncmp(line, "pb\n", ft_strlen(line)) == 0)
        if (stack_b->size > 1)
            pb(stack_b, remove_first(stack_a));
    else
        return (-1);
    return (0);
}

int    ft_check_swap(char *line, t_stack *stack_a, t_stack *stack_b)
{
    if (ft_strncmp(line, "sa\n", ft_strlen(line)) == 0)
        if (stack_a->size > 2)
            sa(stack_a);
    else if (ft_strncmp(line, "sb\n", ft_strlen(line)) == 0)
        if (stack_b->size > 2)
            sb(stack_b);
    else if (ft_strncmp(line, "ss\n", ft_strlen(line)) == 0)
        if (stack_a->size > 2 || stack_a->size > 2)
            ss(stack_a);
    else
        return (-1);
    return (0);
}

int     ft_sort_checker(char *line, t_stack *stack_a, t_stack *stack_b)
{
    int check;

    check = -1;
    if (line)
    {
        if (line == "sa" || "sb" || "ss")
            check = ft_check_swap(line, stack_a, stack_b);
        if (line == "pa" || "pb")
            check = ft_check_push(line, stack_a, stack_b);
        if (line == "ra" || "rb" || "rr")ß
            check = ft_check_rotate(line, stack_a, stack_b);
        if (line == "rra" || "rrb" || "rrr")
            check = ft_check_rev_rotate(line, stack_a, stack_b);
    }
    return (check);
}

int main(int argc, char **argv)
{
    t_stack     *stack_a;
    t_stack     *stack_b;
    char        *line;

    if (argc < 2)
        return (1);
    ft_init_stack(&stack_a);
	ft_insert_numbers(stack_a, argc, argv);
	if (!stack_a->head->data && !stack_a->size)
		ft_checker_error(stack_a, stack_b, "Error\n");
	ft_preprocess(stack_a);
    ft_init_stack(&stack_b);
    line =  "1";
    while (line)
    {
        line = get_next_line(0);
        if (!line)
            break ;
        if (ft_sort_checker(line, stack_a, stack_b) == -1)
            ft_checker_error(stack_a, stack_b, "Error\n");
    }
    if (is_already_sorted(stack_a) && stack_b->size == 0)
        ft_putendl_fd("OK", 1);
    else
        ft_putendl_fd("KO", 1);
    return (0);
}