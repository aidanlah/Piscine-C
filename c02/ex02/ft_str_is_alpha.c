/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:17:53 by aileong           #+#    #+#             */
/*   Updated: 2024/01/15 11:34:12 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	char	check;

	while (*str != '\0')
	{
		check = *str;
		if (!((check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
