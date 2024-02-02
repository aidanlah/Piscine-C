/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:33:16 by aileong           #+#    #+#             */
/*   Updated: 2024/01/31 11:33:17 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	michael_bubble(char *tab[], int size, int i)
{
	char	*temp;

	if (size <= -1)
		return ;
	if (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		michael_bubble(tab, size, i + 1);
	}
	else
		michael_bubble(tab, size - 1, 0);
}

void	ft_sort_string_tab(char **tab)
{
	size_t	size;

	size = 0;
	while (tab[size])
		size ++;
	if (size > 1)
		michael_bubble(tab, size, 0);
}

/*
#include <stdio.h>
int	main()
{
	char	*tab[] = {"hi", "hello", " a", "world", "welcome", NULL};
	ft_sort_string_tab(tab);
	for (int i = 0; tab[i]; i++)
		printf("word %i: %s\n", i, tab[i]);
	return (0);
}*/