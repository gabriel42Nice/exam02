#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *tmp;
	int len = 0;
	int i = 0;

	while (src[len])
		len++;
	tmp = malloc(sizeof(char) * len + 1);
	if (!tmp)
		return (NULL);
	while (src[i])
	{
		tmp[i++] = src[i++];
	}
	tmp[i] = 0;
	return (i);
}
