/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:48:47 by aileong           #+#    #+#             */
/*   Updated: 2024/01/24 12:27:39 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (original_dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strdup(char *c)
{
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * ft_strlen(c) + 1);
	if (!ptr)
		return (NULL);
	return (ft_strcpy(ptr, c));
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	src[] = "i love ciken";
	char	*mine = ft_strdup(src);
	char	*actual = strdup(src);

	if (mine && actual && strcmp(mine, actual) == 0)
		printf("Passed\n");
	else
		printf("Faied\n");
	free(mine);
	free(actual);
	return (0);
}*/
