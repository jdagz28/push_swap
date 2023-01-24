/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:43 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/24 22:36:25 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_stack *stack, char *error)
{
	ft_lstclear(&stack);
	write(STDERR_FILENO, error, ft_strlen(error));
	exit(1);
}

void    ft_check_duplicate(t_stack *stack)
{
    t_stack *tmp;
    t_stack *lst;

    lst = stack;
    while (lst)
    {
        tmp = lst->next;
        while (tmp)
        {
            // if (!tmp->next || (lst->value == tmp->value))
            //     ft_error(stack, "Error\n");
            tmp = tmp->next;
        }
        lst = lst->next;
    }
}

t_stack *ft_init_stack(char **argv)
{
    int i;
    t_stack *stack_a;
    int atoi_error;

    atoi_error = 0;
    i = 0;
    if (!argv)
        return (0);
    stack_a = ft_lstnew(argv[i]);   
    while (argv[++i])
    {    
        ft_lstadd_back(&stack_a, ft_lstnew(argv[i]));
    }
    //ft_check_duplicate(stack_a);
    return (stack_a);
}

