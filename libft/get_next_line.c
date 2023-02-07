/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:55:51 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/07 09:58:24 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_line(char *saved)
{
	int	size;

	size = 0;
	if (!ft_gnl_strchr(saved, '\n'))
		return (ft_gnl_strdup(saved));
	while (saved[size] && saved[size] != '\n')
		size++;
	return (ft_gnl_substr(saved, 0, size + 1));
}

static char	*ft_clean(char *saved)
{
	char	*clear;

	if (!ft_gnl_strchr(saved, '\n'))
		return (free(saved), NULL);
	clear = ft_gnl_strdup(ft_gnl_strchr(saved, '\n') + 1);
	free(saved);
	return (clear);
}

static char	*ft_read(int fd, char *saved)
{
	char	*buffer;
	int		readbytes;
	char	*temp;

	buffer = (char *)malloc(sizeof(*buffer) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (free(saved), NULL);
	readbytes = 1;
	while (readbytes && !ft_gnl_strchr(saved, '\n'))
	{
		readbytes = read(fd, buffer, BUFFER_SIZE);
		if (readbytes == -1 || (readbytes == 0 && !saved[0]))
			return (free(buffer), free(saved), NULL);
		buffer[readbytes] = 0;
		if (readbytes == 0 && saved[0])
			return (free(buffer), saved);
		temp = saved;
		saved = ft_gnl_strjoin(temp, buffer);
		free (temp);
	}
	free(buffer);
	return (saved);
}

char	*get_next_line(int fd)
{
	static char		*saved;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!saved)
		saved = ft_gnl_strdup("");
	if (!saved)
		return (NULL);
	if (!ft_gnl_strchr(saved, '\n'))
		saved = ft_read(fd, saved);
	if (!saved)
		return (NULL);
	line = ft_get_line(saved);
	saved = ft_clean(saved);
	return (line);
}
