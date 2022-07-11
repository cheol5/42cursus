#include "./includes/libft.h"
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t len;
  size_t i;
  char *arr;

  i = 0;
  len = ft_strlen(s);
  if(!(arr = (char *)malloc((len+1))))
    return 0;
  arr[len] = '\0';
  while (s[i])
  {
    arr[i] = f(i, s[i]);
    i++;
  }
  return arr;
}

char test(unsigned int num, char c)
{
  if (num % 2 == 0)
    c -= 32;
  return c;
}