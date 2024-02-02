/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:06:45 by aileong           #+#    #+#             */
/*   Updated: 2024/01/23 19:02:47 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt_recursion(int nb, int root)
{
	if (root * root == nb)
		return (root);
	if (root > 46340)
		return (0);
	else if (root * root < nb)
		return (ft_sqrt_recursion(nb, root + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursion(nb, 0));
}
/*
#include <stdio.h>
int main()
{
    int nb = -1;
	int ans;
    while (nb++ < 2147483647)
    {
		ans = ft_sqrt(nb);
		if (ans)
        	printf("%d's root is %d.\n", nb, ans);
    }
}*/
