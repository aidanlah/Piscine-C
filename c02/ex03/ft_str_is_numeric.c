/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:34:27 by aileong           #+#    #+#             */
/*   Updated: 2024/01/15 11:34:05 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	char	check;

	while (*str != '\0')
	{
		check = *str;
		if (!(check >= '0' && check <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
