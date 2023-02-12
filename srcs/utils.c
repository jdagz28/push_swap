/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/12 21:36:35 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_stack *stack, char *error)
{
	if (stack)
		ft_lstclear(stack);
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

	while (lst->head)
	{
		temp = lst->head->next;
		free(lst->head);
		lst->head = temp;
	}
	free(lst);
}

void	ft_numtab_error(int error, t_stack *stack_a, char **numbers)
{
	if (error == 1)
	{
		ft_free_array(numbers);
		ft_error(stack_a, "Error\n");
	}
}
