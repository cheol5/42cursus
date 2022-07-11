#include "./includes/libft.h"
size_t ft_strlen(const char *s)
{
  size_t i;

  i = 0;
  while(s[i])
    i++;
  return i;
}

void ft_putstr_fd(char *s, int fd)
{
  size_t len;

  len = ft_strlen(s);
  write(fd, s, len);
}
