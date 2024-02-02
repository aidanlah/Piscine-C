/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 01:04:02 by aileong           #+#    #+#             */
/*   Updated: 2024/01/31 01:04:04 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	asc = 0;
	desc = 0;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			asc ++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			desc ++;
		i ++;
	}
	if (asc == i || desc == i)
		return (1);
	return (0);
}
/*
int ft_intcmp(int a, int b)
{
    return (a - b);
}
#include <stdio.h>
int main()
{
    int t1[] = {1,2,3,4,5};
    int t2[] = {1,2,5,3,4};
    printf("Sorted status: %i\n", (ft_is_sort(t1, 5, ft_intcmp)));
    printf("Sorted status: %i\n", (ft_is_sort(t2, 5, ft_intcmp)));
}*/