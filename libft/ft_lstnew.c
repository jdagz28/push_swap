/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:32:45 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/24 22:15:22 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lstnew(void *content)
{
	t_stack	*newlist;
	int		atoi_error;

	newlist = (t_stack *)malloc(sizeof(*newlist));
	if (!newlist)
		return (NULL);
	atoi_error = 0;
	newlist->value = ft_atoi(content, &atoi_error);
	if (atoi_error)
	{
		free(newlist);
		return (0);
	}
	newlist->bucket = 1;
	newlist->next = NULL;
	return (newlist);
}
