#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{
	char		*str;
	char		*line;
	static char	*temp;
	static int	nbyte;
	
	nbyte = 1;
	temp = find_NL(temp, fd, &str, &nbyte);
	if (!temp)
		return (0);
	line = one_line(temp);
	if (str)
		temp = ft_strdup(str + 1);
	return (line);
}

char	*find_NL(char *temp, int fd, char **str, int *nbyte)
{
	char *buf;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	while (!(*str = ft_strchr(temp, '\n')))
	{
		*nbyte = read(fd, buf, BUFFER_SIZE);
		printf("buf:%s\n", buf);
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

char	*ft_strdup(const char *src)
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
