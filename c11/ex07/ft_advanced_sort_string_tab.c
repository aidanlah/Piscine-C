/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:33:16 by aileong           #+#    #+#             */
/*   Updated: 2024/01/31 14:08:50 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}*/

void	michael_bubble(char *tab[], int size, int i, int (*cmp)(char *, char *))
{
	char	*temp;

	if (size <= -1)
		return ;
	if (i < size - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		michael_bubble(tab, size, i + 1, cmp);
	}
	else
		michael_bubble(tab, size - 1, 0, cmp);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	size_t	size;

	size = 0;
	while (tab[size])
		size ++;
	if (size > 1)
		michael_bubble(tab, size, 0, cmp);
}
/*
#include <stdio.h>
int	main()
{
	char	*tab[] = {"hi", "hello", " a", "world", "welcome", NULL};
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	for (int i = 0; tab[i]; i++)
		printf("word %i: %s\n", i, tab[i]);
	return (0);
}*/
