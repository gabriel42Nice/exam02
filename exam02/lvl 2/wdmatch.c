#include <stdio.h>
#include <unistd.h>

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		j = 0;
		i = 0;
		while (av[2][j])
		{
			if (av[2][j] == av[1][i])
				i++;
			if (!av[1][i])
			{
				ft_putstr(av[1]);
				break ;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
