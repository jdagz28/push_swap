/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:06 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/31 04:25:33 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_stack *stack, char *error)
{
	ft_lstclear(stack);
	write(STDERR_FILENO, error, ft_strlen(error));
	exit(1);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	ft_lstclear(t_stack **lst)
{
	t_stack	*temp;

	while (lst && (*lst)->head)
	{
		temp = (*lst)->head->next;
		free((*lst)->head);
		(*lst)->head = temp;
	}
	free(lst);
}