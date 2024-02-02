/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:53:59 by aileong           #+#    #+#             */
/*   Updated: 2024/01/16 20:50:42 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_length(char *src)
{
	unsigned int	length;

	length = 0;
	while (*src != '\0')
	{
		src ++;
		length ++;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (dest == NULL || src == NULL)
	{
		return (i);
	}
	while (i < size -1 && *src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
		i ++;
	}
	if (size > 0)
		*dest = '\0';
	src = src - i;
	return (ft_length(src));
}
