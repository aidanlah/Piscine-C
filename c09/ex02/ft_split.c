/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:16:22 by aileong           #+#    #+#             */
/*   Updated: 2024/01/30 12:16:38 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i ++;
	}
	if (!c)
		return (1);
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			count ++;
		i ++;
	}
	return (count);
}

void	ft_cpy(char	*dst, char *src, char *charset)
{
	int	i;

	i = 0;
	while (!is_sep(src[i], charset))
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
}

void	split_words(char **arr, char *str, char *charset)
{
	int	i;
	int	wc;
	int	word_len;

	i = 0;
	wc = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			i ++;
		else
		{
			word_len = 0;
			while (!is_sep(str[i + word_len], charset))
				word_len ++;
			arr[wc] = (char *) malloc(sizeof(char) * (word_len + 1));
			ft_cpy(arr[wc], str + i, charset);
			i += word_len;
			wc ++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		total_words;

	total_words = word_count(str, charset);
	arr = (char **) malloc(sizeof(char *) * (total_words + 1));
	arr[total_words] = 0;
	if (total_words)
		split_words(arr, str, charset);
	return (arr);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "Hello, my name is Aidan SHEESH!y omai, ,";
	char charset[] = " ,!";

	char **result = ft_split(str, charset);

	printf("str: %s\n", str);
	printf("charset: %s\n", charset);
	printf("result:\n");
	
	int i = 0;
	while (result[i])
	{
		printf("word %d: %s\n", i, result[i]);
		free(result[i]);
		i ++;
	}
	free(result);
	return (0);
}*/
