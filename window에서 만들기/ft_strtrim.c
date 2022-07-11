#include "./includes/libft.h"
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_cmp(char s1, char const *set)
{
  int i;

  i = 0;
  while(set[i])
  { //is s1 in set??
    if (s1 == set[i])
      return (-1);
    i++;
  }
  return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
  char *arr;
  size_t i;
  size_t len;

  len = ft_strlen(s1);
  arr = (char *)malloc((len + 1) * sizeof(char));
  // cpy 를 하는데 조건에 맞을 때만 cpy
  len = 0;
  while (s1[i])
  {
    if (ft_cmp(s1[i], set) == 1)
    {
      arr[len] = s1[i];
      len++;
    }
    i++;
  }
  arr[len] = '\0';
  return (arr);
}
