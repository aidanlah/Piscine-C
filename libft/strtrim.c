/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:27:56 by aileong           #+#    #+#             */
/*   Updated: 2024/03/04 22:27:57 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = NULL;
	if (*s1 && *set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i ++;
		while (j > 1 && s1[j - 1] && ft_strchr(set, s1[j -1]))
			j --;
		str = malloc(j - i + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
