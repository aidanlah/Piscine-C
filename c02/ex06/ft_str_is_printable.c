/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:45:01 by aileong           #+#    #+#             */
/*   Updated: 2024/01/15 11:33:23 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	char	check;

	while (*str != '\0')
	{
		check = *str;
		if (!(check >= 32 && check <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
