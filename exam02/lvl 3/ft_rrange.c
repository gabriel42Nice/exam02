
#include <stdlib.h>

int *ft_rrange(int start,int end)
{
    int i = 0;
	int len;
    int *tab;

    len = abs(end - start) + 1;
    tab = (int *)malloc(len * sizeof(int));
    if (!tab || len < 1)
        return (NULL);
    while (i < len)
    {
        tab[i] = end;
        if (start < end)
            end--;
        else
            end++;
        i++;
    }
    return (tab);
}
