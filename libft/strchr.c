/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:35:19 by aileong           #+#    #+#             */
/*   Updated: 2024/02/28 22:35:20 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
