/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:29:39 by aileong           #+#    #+#             */
/*   Updated: 2024/01/16 14:57:15 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	hex[2];

	hex[0] = (c / 16) + '0';
	if (hex[0] > '9')
	{
		hex[0] += 39;
	}
	hex[1] = (c % 16) + '0';
	{
		hex[1] += 39;
	}
	write(1, hex, 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		print_hex();
	}
}
