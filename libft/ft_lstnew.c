/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:32:45 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/23 13:31:03 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;
	int		atoi_error;

	newlist = (t_list *)malloc(sizeof(*newlist));
	if (!newlist)
		return (NULL);
	atoi_error = 0;
	newlist->value = ft_atoi(content, &atoi_error);
	if (invalid)
	{
		ft_free_satck(newlist);
		return (0);
	}
	stack->partition = 1;
	newlist->next = NULL;
	return (newlist);
}
