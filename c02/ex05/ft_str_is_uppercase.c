/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:42:58 by aileong           #+#    #+#             */
/*   Updated: 2024/01/15 11:33:39 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	char	check;

	while (*str != '\0')
	{
		check = *str;
		if (!(check >= 'A' && check <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
