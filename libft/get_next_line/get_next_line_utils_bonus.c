/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:31:07 by jdagoy            #+#    #+#             */
/*   Updated: 2022/11/14 10:35:58 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	output = malloc(sizeof(*output) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!output)
		return (NULL);
	i = 0;
	while (s1 && *s1)
	{
		output[i++] = *s1;
		s1++;
	}
	while (s2 && *s2)
	{
		output[i++] = *s2;
		s2++;
	}
	output[i] = '\0';
	return (output);
}

char	*ft_strdup(const char *s1)
{
	char	*saved;
	int		i;

	saved = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!saved)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		saved[i] = s1[i];
		i++;
	}
	saved[i] = 0;
	return (saved);
}

char	*ft_strchr(const char *s, int c)
{
	int	pos;

	if (!s)
		return (0);
	pos = 0;
	while (s[pos])
	{
		if (s[pos] == (char)c)
			return (&((char *)s)[pos]);
		pos++;
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	char	*src;
	size_t	count;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	src = (char *)s + start;
	if (ft_strlen(src) < len)
		len = ft_strlen(src) + 1;
	else
		len++;
	output = malloc(len * sizeof(char));
	if (output)
	{
		count = 0;
		while (src[count] && count < len - 1)
		{
			output[count] = src[count];
			count++;
		}
		output[count] = '\0';
	}
	return (output);
}
