/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:25:49 by aileong           #+#    #+#             */
/*   Updated: 2024/01/16 18:23:24 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
int main() 
{
    char str1[] = "Apple";
    char str2[] = "Banana";

    int result = ft_strcmp(str1, str2);
	printf("%d\n", result);

    if (result < 0) {
        printf("str1 is less than str2\n");
    } else if (result > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    char str3[] = "Orange";
    char str4[] = "Grape";

    result = ft_strcmp(str3, str4);

	printf("%d\n", result);

    if (result < 0) {
        printf("str3 is less than str4\n");
    } else if (result > 0) {
        printf("str3 is greater than str4\n");
    } else {
        printf("str3 is equal to str4\n");
    }
    char str5[] = "Car";
    char str6[] = "Car";

    result = ft_strcmp(str5, str6);

    if (result < 0) {
        printf("str5 is less than str6\n");
    } else if (result > 0) {
        printf("str5 is greater than str6\n");
    } else {
        printf("str5 is equal to str6\n");
    }

    return 0;
}
*/
