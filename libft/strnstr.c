#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && (i + j) < n)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j ++;
			}
			j = 0;
		}
		i ++;
	}
	return (NULL);
}