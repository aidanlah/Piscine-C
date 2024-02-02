/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:41:29 by aileong           #+#    #+#             */
/*   Updated: 2024/01/15 11:33:55 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	char	check;

	while (*str != '\0')
	{
		check = *str;
		if (!(check >= 'a' && check <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
