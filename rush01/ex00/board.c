/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oli-chin <oli-chin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:47:57 by oli-chin          #+#    #+#             */
/*   Updated: 2024/01/21 16:21:42 by echow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_initialize_board(int **board, int grid_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < grid_size)
	{
		board[i] = (int *) malloc(grid_size * sizeof(int));
		j = 0;
		while (j < grid_size)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_print_board(int **board, int grid_size)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (i < grid_size)
	{
		j = 0;
		while (j < grid_size)
		{
			tmp = board[i][j] + '0';
			write(1, &tmp, 1);
			if (j != grid_size - 1)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
