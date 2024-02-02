/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:28:11 by aileong           #+#    #+#             */
/*   Updated: 2024/01/24 15:27:30 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *) malloc((max - min) * sizeof(int));
	while (min + i < max)
	{
		arr[i] = min + i;
		i ++;
	}
	return (arr);
}

/*
#include <stdio.h>
void test_ft_range(int min, int max) {
    int *result = ft_range(min, max);

    if (result == NULL) {
        printf("ft_range(%d, %d) returns NULL\n", min, max);
    } else {
        printf("ft_range(%d, %d): [", min, max);
        for (int i = 0; i < max - min; i++) {
            printf("%d", result[i]);
            if (i < max - min - 1) {
                printf(", ");
            }
        }
        printf("]\n");
        free(result); 
	}
}

int main() {
    // Test cases
    test_ft_range(1, 5);
    test_ft_range(5, 1);
    test_ft_range(10, 10);

    return 0;
}*/
