/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:20:47 by aileong           #+#    #+#             */
/*   Updated: 2024/01/17 14:01:43 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dest == NULL || src == NULL)
		return (i);
	while (dest[j] != '\0' && j < size)
		j ++;
	while (j < size - 1 && src[i] != '\0')
	{
		dest[j] = src[i];
		i ++;
		j ++;
	}
	dest[j] = '\0';
	return (j);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char dest1[20] = "Hello";
    char src1[] = "World";
    unsigned int size1 = sizeof(dest1) / sizeof(dest1[0]);
    
    char dest2[20] = "Hello";
    char src2[] = "World";
    size_t size2 = sizeof(dest2) / sizeof(dest2[0]);

    // Using ft_strlcat
    unsigned int result1 = ft_strlcat(dest1, src1, size1);
    printf("ft_strlcat result: %s, length: %u\n", dest1, result1);

    // Using strlcat for comparison
    size_t result2 = strlcat(dest2, src2, size2);
    printf("strlcat result: %s, length: %zu\n", dest2, result2);

    return 0;
}
*/
