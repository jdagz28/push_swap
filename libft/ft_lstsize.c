/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:59:54 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/24 21:20:28 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	lstlen;

	lstlen = 0;
	if (!lst)
		return (lstlen);
	while (lst)
	{
		lstlen++;
		lst = lst->next;
	}
	return (lstlen);
}
