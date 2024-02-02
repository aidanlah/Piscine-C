/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:19:07 by aileong           #+#    #+#             */
/*   Updated: 2024/01/17 12:49:13 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

/*
int main() {
    // Test Case 1: Concatenating two non-empty strings
    char dest1[20] = "Hello, ";
    char src1[] = "world!";
    ft_strcat(dest1, src1);
    printf("Test Case 1: %s\n", dest1);

    // Test Case 2: Concatenating with an empty destination string
    char dest2[20] = "";
    char src2[] = "Concatenate me!";
    ft_strcat(dest2, src2);
    printf("Test Case 2: %s\n", dest2);

    // Test Case 3: Concatenating with an empty source string
    char dest3[20] = "This is a ";
    char src3[] = "";
    ft_strcat(dest3, src3);
    printf("Test Case 3: %s\n", dest3);

    // Test Case 4: Concatenating two empty strings
    char dest4[20] = "";
    char src4[] = "";
    ft_strcat(dest4, src4);
    printf("Test Case 4: %s\n", dest4);

    // Test Case 5: Concatenating with limited space in destination
    char dest5[10] = "Hello, ";
    char src5[] = "world!";
    ft_strcat(dest5, src5);
    printf("Test Case 5: %s\n", dest5);

    return 0;
}*/
