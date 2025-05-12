
#include <stdlib.h>

int     *ft_rrange(int start, int end)
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
		tab[i] = end;
		end--;
		i++;
	}
	return (tab);
}
