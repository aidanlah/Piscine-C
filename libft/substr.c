#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	substr = malloc(sizeof(char) * len);
	if (!substr)
		return (NULL);
	
	while (i < len && s[start])
	{
		substr[i] = s[start];
		i ++;
		start ++;
	}
	return (substr);
}
