
#include <unistd.h>

int is_prime(int num)
{
	int i = 3;

	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int a = 0;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		i++;
	}
	return (a);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = nb % 10 + '0';
	write (1, &c, 1);
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int nb = ft_atoi(argv[1]);
	
	if (argc == 2)
	{
		while (nb > 0)
			if (is_prime(nb--))
				sum += (nb + 1);
		ft_putnbr(sum);
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
