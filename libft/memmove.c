/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:35:02 by aileong           #+#    #+#             */
/*   Updated: 2024/02/28 22:35:03 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// like memcpy, but avoids overlapping
// if src comes before dest, copy from the back to the front
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (s < d)
	{
		i = n;
		while (i > 0)
		{
			i --;
			d[i] = s[i];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i ++;
		}
	}
	return (dest);
}
