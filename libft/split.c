#include "libft.h"

static	void	free_up(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i ++;
	}
	free(str);
}

static	int	word_count(char *str, char *c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || !(str[i +1])))
			count ++;
		i ++;
	}
	return (count);
}

static	void	ft_cpy(char	*dst, char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
}

static	void	split_words(char **arr, char *str, char c)
{
	int	i;
	int	wc;
	int	word_len;

	i = 0;
	wc = 0;
	while (str[i])
	{
		if (str[i] == c)
			i ++;
		else
		{
			word_len = 0;
			while (str[i + word_len] && str[i + word_len] != c)
				word_len ++;
			arr[wc] = (char *) malloc(sizeof(char) * (word_len + 1));
			if (!arr[wc])
			{
				free_up(arr);
				return ;
			}
			ft_cpy(arr[wc], str + i, c);
			i += word_len;
			wc ++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		total_words;

	total_words = word_count(s, c);
	arr = (char **) malloc(sizeof(char *) * (total_words + 1));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	arr[total_words] = NULL;
	if (total_words > 0)
		split_words(arr, s, c);
	return (arr);
}