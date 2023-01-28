/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:28:17 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/28 00:32:58 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
