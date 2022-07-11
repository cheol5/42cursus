#include "./includes/libft.h"
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void ft_strcpy(char *dst, char const *src, size_t idx)
{
  size_t i;

  i = 0;
  while (src[i])
  {
    dst[idx] = src[i];
    idx++;
    i++;
  }
}

char *ft_strjoin(char const *s1, char const *s2)
{
  size_t i;
  size_t lens1;
  size_t lens2;
  char *arr;

  i = 0;
  lens1 = ft_strlen(s1);
  lens2 = ft_strlen(s2);
  arr = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
  if (arr == 0)
    return (0);
  ft_strcpy(arr, s1, 0);
  ft_strcpy(arr, s2, lens1);

  return (arr);
}
