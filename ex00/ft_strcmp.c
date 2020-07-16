#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

int     ft_putnbr(int n)
{
  if (n < 0)
    {
      ft_putchar('-');
      n = -n;
    }
  if (n >= 10)
    {
      ft_putnbr(n / 10);
      ft_putchar(n % 10 + '0');
    }
  if (n < 10)
    {
      ft_putchar(n % 10 + '0');
    }
  return (n);
}

int ft_strcmp(char *s1, char *s2)
{
  if (s1 == s2)
  {
    ft_putnbr(1);
  }
  else if (s1 > s2 || s1 < s2)
  {
    ft_putnbr(-1);
  }
  
  return 0;
}