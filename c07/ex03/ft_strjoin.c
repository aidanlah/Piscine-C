/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:13:26 by aileong           #+#    #+#             */
/*   Updated: 2024/01/24 17:20:21 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i ++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	calc_total_length(int size, char **strs, char *sep)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (strs[i])
			len += ft_strlen(strs[i]);
		if (i < size - 1 && *sep)
			len += ft_strlen(sep);
		i ++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*joint;
	size_t	len;

	i = 0;
	if (size == 0)
	{
		joint = (char *) malloc(1);
		joint[0] = '\0';
		return (joint);
	}
	len = calc_total_length(size, strs, sep);
	joint = (char *) malloc(sizeof(char) * len + 1);
	if (!joint)
		return (NULL);
	joint[0] = '\0';
	ft_strcat(joint, strs[i]);
	while (++i < size)
	{
		ft_strcat(joint, sep);
		ft_strcat(joint, strs[i]);
	}
	return (joint);
}
/*
#include <stdio.h>
int main()
{
    char *strings[] = {"Hello", "world", "!"};
    char *separator = " ";
    char *result = ft_strjoin(3, strings, separator);

    printf("Result: %s\n", result);
    free(result);
    return 0;
}*/