#include "libft.h"

// type casted s when assigning to ptr
// as it is treated as a sequence of bytes,
// allows to increment ptr 1 byte at a time.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i ++;
	}
	return (s);
}
