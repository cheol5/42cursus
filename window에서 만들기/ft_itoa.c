#include "./includes/libft.h"
int getlen(int num)
{
  int length;

  length = 0;
  if (num <= 0)
    length++;
  while(num)
  {
    num /= 10;
    length++;
  } 
  return (length);
}

char *ft_itoa(int n)
{
  int len;
  long long temp_n;
  char *arr;
  
  len = getlen(n);
  temp_n = (long long)n;
  if(!(arr = (char *)malloc((len + 1)*sizeof(char))))
    return (0);
  arr[len--] = '\0';
  if (n == 0)
    arr[0] = '0';
  if (temp_n < 0)
  {
    arr[0] = '-';
    temp_n *= -1;
  }
  while (temp_n)
  {
    arr[len--] = temp_n % 10 + '0';
    temp_n /= 10;
  }
  return arr;
}
