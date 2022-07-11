#include "./includes/libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  char *arr;

  arr = (char *)malloc((len +1) * sizeof(char));
  if (arr == 0)
    return (0);
  if (start > strlen(n) - 1)
    return (0);
  if (start + len - 1 > strlen(s) - 1)
    return (0);s
  while (start < len)
  {
    arr[start] = s[start]
    start++;
  }
  return (arr);
}