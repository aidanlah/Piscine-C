/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:42:31 by aileong           #+#    #+#             */
/*   Updated: 2024/01/30 21:42:44 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*sheesh;

	i = 0;
	sheesh = (int *) malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		sheesh[i] = f(tab[i]);
		i ++;
	}
	sheesh[i] = '\0';
	return (sheesh);
}
/*
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int	main()
{
	int	arr[] = {1,2,3,4,5};
	int *result = ft_map(arr, 5, ft_recursive_factorial);
	int i = 0;
	while (result[i])
		printf("%i\n", result[i++]);
}*/