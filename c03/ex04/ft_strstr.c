/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:43:11 by aileong           #+#    #+#             */
/*   Updated: 2024/01/17 14:20:19 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare_str(char *str, char *to_find, int i, int j)
{
	while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
	{
		i ++;
		j ++;
	}
	return (j);
}

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
#include <stdio.h>
#include <string.h>

int main() {
    // Test Case 1: Substring in the middle
    char str1[] = "Programming is fun and challenging";
    char to_find1[] = "is fun";
    char *result1 = ft_strstr(str1, to_find1);
    printf("Test Case 1: %s\n", result1);
	
	char *test = strstr(str1, to_find1);
	printf("Test using strstr:%s\n",test);

    return 0;
}
*/
