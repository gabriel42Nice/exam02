#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int *tab;
	int len;

	len = end - start + 1;
	tab = malloc (sizeof(int) * len);
	if (!tab || len < 1)
		return (NULL);
	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}