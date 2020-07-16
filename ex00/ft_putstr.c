#include <unistd.h>
void ft_putstr(char *str)
{
    int count;
    count = 0;
    while (str[count] != 0)
    {
        ft_putchar(str[count]);
        count++;
    }
}