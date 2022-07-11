#include "./includes/libft.h"
void ft_putnbr_fd(int n, int fd)
{
  char c;

  if (n == -2147483648)
    write(fd, "-2147483648", 11);
  else if (n < 0)
  {
    n *= -1;
    write(fd, "-", 1);
  }
  else if (n >= 10)
  {
    ft_putnbr_fd(n/10, fd);
    ft_putnbr_fd(n%10, fd);
  }
  else
  {
    c = n + '0';
    write(fd, &c, 1);
  }
}