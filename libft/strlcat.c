#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i ++;
	while ((i + j) < size - 1 && src[j])
	{
		dest[i + j] = src[j];
		j ++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}