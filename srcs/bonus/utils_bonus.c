/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/08 11:36:57 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	ft_error(t_stack *stack, char *error)
{
	ft_lstclear(stack);
	write(STDERR_FILENO, error, ft_strlen(error));
	exit(1);
}

void	ft_checker_error(t_stack *stack_a, t_stack *stack_b, char *error)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	write(STDERR_FILENO, error, ft_strlen(error));
	exit(1);
}

void	ft_free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	ft_lstclear(t_stack *lst)
{
	t_node	*temp;

	while (lst && lst->head)
	{
		temp = lst->head->next;
		free(lst->head);
		lst->head = temp;
	}
	free(lst);
}

int	is_already_sorted(t_stack *stack_a)
{
	t_node	*node;

	node = stack_a->head->next;
	while (node->next->next)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}
