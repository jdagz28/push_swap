/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:21:47 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/24 21:36:08 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"

int	ft_atoi(const char *str, int *atoi_error)
{
	int					i;
	int					sign;
	long 				atoi;

	i = 0;
	sign = 1;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= 0 && str[i] <= 9)
	{	
		atoi = atoi * 10 + (str[i++] - '0');
		if (sign * atoi < INT_MIN || sign * atoi > INT_MAX)
		{
			*atoi_error = 1;
			return (0);
		}
	}	
	return (atoi * sign);
}
