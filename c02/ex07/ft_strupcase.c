/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:47:53 by aileong           #+#    #+#             */
/*   Updated: 2024/01/15 11:45:04 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	check;
	char	*ori_str;

	ori_str = str;
	while (*str != '\0')
	{
		check = *str;
		if (check >= 'a' && check <= 'z')
		{
			check -= 32;
		}
		*str = check;
		str ++;
	}
	return (ori_str);
}
