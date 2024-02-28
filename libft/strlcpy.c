#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src)
	if (size > 0)
	{
		while (i < size -1 && *src != '\0')
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = '\0';
	}	
	return (srclen);
}
