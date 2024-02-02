/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:23:53 by aileong           #+#    #+#             */
/*   Updated: 2024/01/16 18:39:54 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1 ++;
		s2 ++;
		n --;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

/*
int main() {
    // Test Case 1: Empty strings
    char str1_empty[] = "";
    char str2_empty[] = "";
    printf("Test Case 1: %d\n", ft_strncmp(str1_empty, str2_empty, 3));

    // Test Case 2: Non-empty string vs. empty string
    char str1_nonempty[] = "Hello";
    char str2_empty2[] = "";
    printf("Test Case 2: %d\n", ft_strncmp(str1_nonempty, str2_empty2, 2));

    // Test Case 3: Case-insensitive comparison
    char str3_uppercase[] = "HELLO";
    char str4_lowercase[] = "hello";
    printf("Test Case 3: %d\n", ft_strncmp(str3_uppercase, str4_lowercase, 5));

    // Test Case 4: Strings with different ends
    char str5_ending1[] = "abcdefg";
    char str6_ending2[] = "abcdefghijk";
    printf("Test Case 4: %d\n", ft_strncmp(str5_ending1, str6_ending2, 10));

    // Test Case 5: Strings with a common prefix
    char str7_prefix1[] = "common_prefix_abcd";
    char str8_prefix2[] = "common_prefix_xyz";
    printf("Test Case 5: %d\n", ft_strncmp(str7_prefix1, str8_prefix2, 13));

    // Test Case 6: Strings with numeric characters
    char str9_numeric1[] = "12345";
    char str10_numeric2[] = "1234";
    printf("Test Case 6: %d\n", ft_strncmp(str9_numeric1, str10_numeric2, 5));

    return 0;
}
*/
