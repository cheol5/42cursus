#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*arr;

	if (!s1)
		s1 = ft_strdup("");
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!lens2 && !lens1)
		return (0);
	arr = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!arr)
		return (0);
	ft_strlcpy(arr, s1, lens1 + 1);
	ft_strlcpy(arr + lens1, s2, lens2 + 1);
	return (arr);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	cc = (char)c;
	i = 0;
	if (!s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*one_line(const char *src)
{
	char	*nomi;
	int		i;

	i = 0;
	if (!src)
		return (0);
	while (src[i] && src[i] != '\n')
		i++;
	nomi = (char *)malloc((i + 2) * sizeof(char));
	if (nomi == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		nomi[i] = src[i];
		i++;
		if (src[i - 1] == '\n')
			break;
	}
	nomi[i] = '\0';
	return (nomi);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (!dstsize)
		return (len);
	while (i < len && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}