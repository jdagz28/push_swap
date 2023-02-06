/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:51:48 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/06 12:17:12 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*mem;

	len = ft_strlen(s1);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	ft_memcpy(mem, s1, len + 1);
	return (mem);
}
