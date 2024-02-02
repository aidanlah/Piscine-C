/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:58:39 by aileong           #+#    #+#             */
/*   Updated: 2024/01/31 00:58:40 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
		{
			count ++;
		}
		i ++;
	}
	return (count);
}
/*
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
#include <stdio.h>
int	main()
{
	char	*str[] = {"hello", "world", NULL};

	int count = (ft_count_if(str, 2, ft_str_is_alpha));
	printf("%i\n", count);
	return (0);
}*/