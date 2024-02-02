/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:22:50 by aileong           #+#    #+#             */
/*   Updated: 2024/01/14 21:28:49 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * i love BUBBLE SORTING :')
 * help.
 */

void	michael_bubble(int *tab, int size, int idx)
{
	int	temp;

	if (idx == size - 1)
	{
		michael_bubble(tab, size - 1, 0);
	}
	else if (tab[idx] > tab[idx + 1])
	{
		temp = tab[idx];
		tab[idx] = tab[idx + 1];
		tab[idx + 1] = temp;
	}
	if (idx < size - 1)
	{
		michael_bubble(tab, size, idx + 1);
	}
}

/* 
 * i love recursion :O
 */
void	ft_sort_int_tab(int *tab, int size)
{
	if (size > 1)
	{
		michael_bubble(tab, size, 0);
		ft_sort_int_tab(tab, size - 1);
	}
}
