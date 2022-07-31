/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:38:11 by coh               #+#    #+#             */
/*   Updated: 2022/07/31 19:37:20 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	char		*str;
	char		*line;
	static char	*temp[257];
	int			nb;

	nb = -1;
	str = 0;
	line = 0;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 256)
		return (0);
	temp[fd] = find_nl(temp[fd], fd, &str, &nb);
	if (!temp[fd])
		return (0);
	line = one_line(temp[fd]);
	if (str)
		temp[fd] = ft_strdup(str + 1, temp[fd]);
	if (!nb)
	{
		free(temp[fd]);
		temp[fd] = 0;
	}
	return (line);
}

char	*find_nl(char *temp, int fd, char **str, int *nbyte)
{
	char	*buf;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (0);
	*str = ft_strchr(temp, '\n');
	while (!(*str) && *nbyte)
	{
		*nbyte = read(fd, buf, BUFFER_SIZE);
		if (*nbyte == -1)
		{
			free(buf);
			return (0);
		}
		buf[*nbyte] = '\0';
		if (*nbyte)
			temp = ft_strjoin(temp, buf);
		*str = ft_strchr(temp, '\n');
	}
	free(buf);
	return (temp);
}

char	*ft_strdup(char *src, char *temp)
{
	char	*nomi;
	int		i;

	i = 0;
	while (src[i])
		i++;
	nomi = (char *)malloc((i + 1) * sizeof(char));
	if (!nomi)
		return (0);
	i = 0;
	while (src[i])
	{
		nomi[i] = src[i];
		i++;
	}
	nomi[i] = '\0';
	free(temp);
	return (nomi);
}
