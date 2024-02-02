/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:13:44 by aileong           #+#    #+#             */
/*   Updated: 2024/01/25 14:20:36 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
 * Function to calc str len
 */
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}
/*
 * Helper function to compare str
 */
int	compare_str(char *str, char *to_find, int i, int j)
{
	while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
	{
		i ++;
		j ++;
	}
	return (j);
}
/*
 * Function to find substring within str
 */
char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;
	int	match_start;

	j = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			match_start = i;
			j = compare_str(str, to_find, i, j);
			if (to_find[j] == '\0')
				return (str + match_start);
			i = match_start;
			j = 0;
		}
		i ++;
	}
	return (NULL);
}
/*
 * Function to copy str
 */
char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (original_dest);
}

size_t	ft_count_words(char const *s, char c)
{
	//move the word count portion from ft_split to here.
}

/*
 * Main function to split str
 */
char    **ft_split(char *str, char *charset)
{
	int		len;
	int		count;
	int		i;
	int 	new_str;
	char	**strs;
	char	buffer[16384];
	int		j;
	int		idx;

	len = ft_strlen(str);
	count = 0;
	i = 0;
	while (i < len)
	{
		while (i < len && ft_strstr(charset, str[i]) != NULL)
			i ++;
		new_str = i;
		while (i < len && ft_strstr(charset, str[i]) == NULL)
			i ++;
		if (i > new_str)
			count += 1;
	}
	strs = (char **) malloc(sizeof(char *) * count);
	i = 0;
	idx = 0;
	while (i < len)
	{
		while (i < len && ft_strstr(charset, str[i]) != NULL)
			i ++;
		buffer[j] = '\0';
		j = 0;
		while (i < len && ft_strstr(charset, str[i]) == NULL)
		{
			buffer[j] = str[i];
			i ++;
			j ++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';
			int	to_allocate = sizeof(char) * (ft_strlen(buffer) + 1);
			str[idx] = malloc(to_allocate);
			ft_strcpy(strs[idx], buffer);
			idx ++;
		}
	}
	return (strs);
}

int	main()
{
	char s[] = "Testing 1 2 3, LOLOL, i liek rice.";
	return (0);
}