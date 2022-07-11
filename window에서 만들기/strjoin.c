#include "./includes/libft.h"
int		len(int size, char **strs, char *sep);
char	*ft_strjoin(int size, char **strs, char *sep);
void	temp_func(int size, char **strs, char *sep, char *arr);

int	len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			length++;
		j = 0;
		if (i != size - 1)
		{
			while (sep[j++])
				length++;
		}
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		length;

	length = len(size, strs, sep);
	arr = (char *)malloc(length * sizeof(char) + 1);
	if (arr == 0)
		return (0);
	temp_func(size, strs, sep, arr);
	return (arr);
}

void	temp_func(int size, char **strs, char *sep, char *arr)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[index++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
		{
			while (sep[j])
				arr[index++] = sep[j++];
		}
		i++;
	}
	arr[index] = '\0';
}
