/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:21:47 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/07 09:56:16 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_check(long long atoi)
{
	if (atoi > INT_MAX || atoi < INT_MIN)
		ft_error(NULL, "Error\n");
	return (atoi);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	atoi;

	i = 0;
	sign = 1;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
		if (!ft_isdigit(str[i]))
			ft_error(NULL, "Error\n");
	}
	while (str[i])
	{	
		if (!ft_isdigit(str[i]))
			ft_error(NULL, "Error\n");
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}
	return (ft_atoi_check(atoi * sign));
}
