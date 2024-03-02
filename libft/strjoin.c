#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(len);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j ++;
	}
	return (str);
}
