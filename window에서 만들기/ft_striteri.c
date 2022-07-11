#include "./includes/libft.h"
size_t ft_strlen(const char *s)
{
  size_t i;

  i = 0;
  while(s[i])
    i++;
  return i;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  size_t len;
  size_t i;

  i = 0;
  while(s[i++])
    f(i, &s[i]);
  printf("%s", s);
}

