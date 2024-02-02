/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:33 by aileong           #+#    #+#             */
/*   Updated: 2024/01/21 00:19:00 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		result *= nb;
		power --;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int nb = 2;
	int power = 5;

	int	result = ft_iterative_power(nb, power);
	printf("%d\n", result);
	return (0);
}*/
