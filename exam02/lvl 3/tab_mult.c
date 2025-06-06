
#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int c = 0;

    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        c = c * 10 + str[i] - '0';
        i++;
    }
    return (c);
}

void ft_putnbr(int nbr)
{
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    char c = nbr % 10 + '0';
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        write(1, &s[i++], 1);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 1; 
    int n = ft_atoi(av[1]);
    
    while (i < 10)
    {
        ft_putnbr(i);
        ft_putstr(" x ");
        ft_putnbr(n);
        ft_putstr(" = ");
        ft_putnbr(i * n);
        write(1, "\n", 1);
        i++;
    }
}
