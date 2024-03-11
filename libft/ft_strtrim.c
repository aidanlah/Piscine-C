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
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1 ++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i --;
	return (ft_substr(s1, 0, i + 1));
}

// #include <stdio.h>
// int main(){
// 	char s1[] = "aaa dnwiuabfenua aaa";
// 	char set[] = "a ";
// 	printf("%s\n", ft_strtrim(s1, set));
// }