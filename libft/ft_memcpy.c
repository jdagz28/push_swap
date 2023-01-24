/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:09:58 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/24 21:20:33 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	dest = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dest && !s && n)
		return (NULL);
	while (n)
	{
		dest[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}
