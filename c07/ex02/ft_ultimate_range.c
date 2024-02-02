/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:32:45 by aileong           #+#    #+#             */
/*   Updated: 2024/01/24 16:12:47 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i ++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <limits.h>
void test(int min, int max)
{
    int *result;
    int size = ft_ultimate_range(&result, min, max);

    if (size == -1) 
	{
        printf("(%d, %d): Memory not allocated\n", min, max);
    } 
	else if (size == 0) 
	{
        printf("(%d, %d): Result is NULL\n", min, max);
    } 
	else 
	{
        printf("(%d, %d): [", min, max);
        for (int i = 0; i < size; i++) 
		{
            printf("%d", result[i]);
            if (i < size - 1) 
			{
                printf(", ");
            }
        }
        printf("]\n");
        free(result);    
	}
}

int main() 
{
    // Test cases
    test(1, 5);
    test(5, 1);
	test(10, 10);
	test(INT_MIN, INT_MAX);
    return (0);
}*/
