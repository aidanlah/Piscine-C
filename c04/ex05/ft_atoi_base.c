/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:22:35 by aileong           #+#    #+#             */
/*   Updated: 2024/01/18 16:54:04 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_base(char *base)
{
	if (*base == '\0' && *(base + 1) == '\0')
		return (0);
	while (*base != '\0')
	{
		if (*base == *(base + 1) || *base == '-' || *base == '+')
			return (0);
		else if (*base == '\t' || *base == '\n' || *base == '\v')
			return (0);
		else if (*base == '\f' || *base == '\r' || *base == ' ')
			return (0);
		base ++;
	}
	return (1);
}

int	base_type(char *base, char *str)
{
	if (!(*base && *str))
		return (1);
	if (*base == *str && *base && *str)
		return (base_type(base + 1, str + 1));
	return (0);
}

int	char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i ++;
	}
	return (-1);
}

int	is_space_is_sign(char **str, int *sign)
{
	while (**str)
	{
		(*sign)++;
		if (**str == '+' || **str == ' ' || **str == '\t' || **str == '\v')
			(*str)++;
		else if (**str == '\n' || **str == '\f' || **str == '\r')
			(*str)++;
		else if (**str == '-')
		{
			(*str)++;
			*sign = -(*sign);
		}
		else
			break ;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	is_num;
	int	num;
	int	sign;

	base_len = 0;
	sign = 0;
	while (base[base_len])
		base_len ++;
	if (valid_base(base))
	{
		is_space_is_sign(&str, &sign);
		while (*str)
		{
			is_num = char_in_base(*str, base);
			if (is_num == -1 || is_num >= base_len)
				break ;
			num = num * base_len + is_num;
			str ++;
		}
		return (sign * num);
	}
	return (0);
}

/*
#include <stdio.h>
int main() 
{
    // Test cases
    printf("[1] %d\n", ft_atoi_base("101101", "01")); // Expected: 45
    printf("[2] %d\n", ft_atoi_base("FF", "0123456789ABCDEF")); // Expected: 255
    printf("[3] %d\n", ft_atoi_base("   -14353", "0123456789")); // Expected: -14353
    printf("[4] %d\n", ft_atoi_base("   -10101001", "01")); // Expected: -169
    printf("[5] %d\n", ft_atoi_base("   -59", "0123456789ABCDEF")); // Expected: -89

    return 0;
}
*/
