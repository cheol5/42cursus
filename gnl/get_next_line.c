/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:38:11 by coh               #+#    #+#             */
/*   Updated: 2022/07/26 21:34:37 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*str;
	char		*line;
	static char	*temp;
	static int	nbyte;

	nbyte = 1;
	temp = find_nl(temp, fd, &str, &nbyte);
	if (!temp)
	{	
		free(temp);
		return (0);
	}
	line = one_line(temp);
	free(temp);
	temp = 0;
	if (!nbyte)
		temp = 0;
	if (str)
		temp = ft_strdup(str + 1);
	return (line);
}

char	*find_nl(char *temp, int fd, char **str, int *nbyte)
{
	char	*buf;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	*str = ft_strchr(temp, '\n');
	while (!(*str) && *nbyte)
	{
		*str = ft_strchr(temp, '\n');
		*nbyte = read(fd, buf, BUFFER_SIZE);
		if (*nbyte == -1)
		{
			free(buf);
			return (0);
		}
		buf[*nbyte] = '\0';
		temp = ft_strjoin(temp, buf);
	}
	free(buf);
	return (temp);
}

char	*ft_strdup(char *src)
{
	char	*nomi;
	int		i;

	i = 0;
	while (src[i])
		i++;
	nomi = (char *)malloc((i + 1) * sizeof(char));
	if (nomi == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		nomi[i] = src[i];
		i++;
	}
	nomi[i] = '\0';
	return (nomi);
}
