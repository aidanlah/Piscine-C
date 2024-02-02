/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:51:45 by aileong           #+#    #+#             */
/*   Updated: 2024/01/16 13:10:56 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_low(curr, prev)
{
	if ('a' <= curr && curr <= 'z')
		if (!(('a' <= prev && prev <= 'z') || ('A' <= prev && prev <= 'Z')))
			if (!('0' <= prev && prev <= '9'))
				return (1);
	return (0);
}

int	check_up(curr, prev)
{
	if ('A' <= curr && curr <= 'Z')
	{
		if ('A' <= prev && prev <= 'Z')
			return (1);
		if (('a' <= prev && prev <= 'z') || ('0' <= prev && prev <= '9'))
			return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	curr;
	char	prev;
	char	*ori_str;

	ori_str = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	while (*str != '\0')
	{
		curr = *str;
		prev = *(str - 1);
		if (check_low(curr, prev) == 1)
		{
			*str -= 32;
		}
		else if (check_up(curr, prev) == 1)
		{
			*str += 32;
		}
		str ++;
	}
	return (ori_str);
}
