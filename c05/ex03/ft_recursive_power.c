/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:02:06 by aileong           #+#    #+#             */
/*   Updated: 2024/01/22 16:02:34 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

/*
#include <stdio.h>
int main()
{
    int nb = 2;
    int power = 5;
    nb = ft_recursive_power(nb, power);
    printf("%d\n", nb);
    return 0;
}*/
