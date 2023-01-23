/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/23 20:52:57 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_stack *stack, char *error)
{
	ft_lstclear(stack);
	write(STDERR_FILENO, error, ft_strlen(error));
	exit(1);
}

int	ft_is_sorted(t_stack *stack)
{
	while(stack && stack->next)
	{
		if (stack->value > (stack->next)->value)
			return (0); //there is one value greater than the next value
		stack = stack->next;
	}
	return (1); // stack is in order and already sorted
}