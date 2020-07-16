#include <unistd.h>

void ft_putchar(char *c)
{
    int count;
    count = 0;

    while (c[count])
    {
        write(1,&c[count],1);
        count++;
    }
}
int main (int argc, char *argv[])
{
    int count;
    count = 0;

    while(argc > count)
    {
        ft_putchar(argv[count]);
        count++;
    }
    return 0;
}