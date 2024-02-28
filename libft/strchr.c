#include "libft.h"

// type casted becuase return type is pointer to a char
char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s ++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
