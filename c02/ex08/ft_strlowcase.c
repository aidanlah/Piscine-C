/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:29:55 by aileong           #+#    #+#             */
/*   Updated: 2024/01/15 11:50:56 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	check;
	char	*ori_str;

	ori_str = str;
	while (*str != '\0')
	{
		check = *str;
		if (check >= 'A' && check <= 'Z')
		{
			check += 32;
		}
		*str = check;
		str ++;
	}
	return (ori_str);
}
