#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = malloc(sizeof(char) * len);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		substr[i] = s[start];
		i ++;
		start ++;
	}
	return (substr);
}
