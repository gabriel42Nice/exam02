#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || \
		str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int arg = 1;
		
		while (arg < argc)
		{
			str_capitalizer(argv[arg]);
			write(1, "\n", 1);
			arg++;
		}
	}
	else
		write(1, "\n", 1);
}