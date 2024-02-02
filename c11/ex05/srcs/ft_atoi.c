/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:52:35 by aileong           #+#    #+#             */
/*   Updated: 2024/01/31 14:52:52 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n')
		return (1);
	else if (*str == '\v' || *str == '\f' || *str == '\r')
		return (1);
	return (0);
}

int	is_sign(char *str)
{
	if (*str == '-' || *str == '+')
		return (1);
	return (0);
}

int	is_numeric(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while (is_space(str))
		str++;
	while (is_sign(str))
	{
		if (*str == '-')
			sign = -sign;
		str ++;
	}
	while (*str && is_numeric(str))
	{
		num = num * 10 + (*str - '0');
		str ++;
	}
	return (sign * num);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s = "-2147483648";
	printf("mine: %d atoi: %d", ft_atoi(s), atoi(s));
	return (0);
}
*/
