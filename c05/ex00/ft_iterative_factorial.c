/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:23:30 by aileong           #+#    #+#             */
/*   Updated: 2024/01/20 23:49:16 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	num = 1;
	while (nb != 0)
	{
		num *= nb;
		nb --;
	}
	return (num);
}

/*
#include <stdio.h>
int main()
{
	int nb = 4;

	nb = ft_iterative_factorial(nb);
	printf("%d", nb);
}*/
