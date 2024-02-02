/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:23:03 by aileong           #+#    #+#             */
/*   Updated: 2024/01/23 22:00:28 by aileong          ###   ########.fr       */
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

	if (i == size - 1)
	{
		michael_bubble(tab, size - 1, 0);
	}
	else if (ft_strcmp(tab[i], tab[i + 1]) > 0)
	{
		temp = tab[i];
		tab[i] = tab[i + 1];
		tab[i + 1] = temp;
	}
	if (i < size - 1)
	{
		michael_bubble(tab, size, i + 1);
	}
}

void	ft_sort_int_tab(char *tab[], int size)
{
	if (size > 1)
	{
		michael_bubble(tab, size, 0);
		ft_sort_int_tab(tab, size - 1);
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 0;
	argv ++;
	ft_sort_int_tab(argv, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
