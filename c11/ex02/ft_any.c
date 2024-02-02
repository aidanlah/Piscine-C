/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:10:42 by aileong           #+#    #+#             */
/*   Updated: 2024/01/30 22:10:46 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
		{
			return (1);
		}
		i ++;
	}
	return (0);
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

	if (ft_any(str, ft_str_is_alpha))
		printf("At least 1 string is alpha\n");
	else
		printf("No strings are alpha\n");
	return (0);
}*/