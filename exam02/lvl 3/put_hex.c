#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int atoi = 0;
    int i = 0;
    
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        atoi = atoi * 10 + str[i] - '0';
        i++;
    }
    return (atoi);
}

void put_hex(int nbr)
{
    char *digits = "0123456789abcdef";

    if (nbr >= 16)
        put_hex(nbr / 16);
    nbr = digits[nbr % 16];
    write(1, &nbr, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        put_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (0);
}
