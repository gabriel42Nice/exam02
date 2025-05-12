#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

void	ft_print_first_word(char *str, int j)
{
	while (str[j] != '\0' && !is_space(str[j]))
	{
		ft_putchar(str[j]);
		j++;
	}
}

void	rostring(char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j] != '\0' && is_space(str[j]))
		j++;
	i = j;
	while (str[i] != '\0' && !is_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && !is_space(str[i]) && is_space(str[i - 1]))
		{
			while (str[i] != '\0' && !is_space(str[i]))
			{
				ft_putchar(str[i]);
				i++;
			}
			ft_putchar(' ');
		}
		i++;
	}
	ft_print_first_word(str, j);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}


