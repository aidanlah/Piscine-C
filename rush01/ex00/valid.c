/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oli-chin <oli-chin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:53:16 by oli-chin          #+#    #+#             */
/*   Updated: 2024/01/21 16:33:50 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	row_not_filled(int **board, int grid_size, int row);
int	col_not_filled(int **board, int grid_size, int col);

int	valid_top(int **board, int grid_size, int *views, int col)
{
	int	i;
	int	count;
	int	largest;

	i = 0;
	count = 1;
	largest = board[i][col];
	while (i < (grid_size - 1))
	{
		if (largest < board[i + 1][col])
		{
			count ++;
			largest = board[i + 1][col];
		}
		i ++;
	}
	if (count <= views[grid_size * 0 + col] && \
		col_not_filled(board, grid_size, col))
		return (1);
	else if (count == views[grid_size * 0 + col] && \
			!col_not_filled(board, grid_size, col))
		return (1);
	return (0);
}

int	valid_bottom(int **board, int grid_size, int *views, int col)
{
	int	i;
	int	count;
	int	largest;

	i = grid_size - 1;
	count = 1;
	largest = board[i][col];
	while (i > 0)
	{
		if (largest < board[i - 1][col])
		{
			count ++;
			largest = board[i - 1][col];
		}
		i --;
	}
	if (count <= views[grid_size * 1 + col] && \
		col_not_filled(board, grid_size, col))
		return (1);
	else if (count == views[grid_size * 1 + col] && \
		!col_not_filled(board, grid_size, col))
		return (1);
	return (0);
}

int	valid_left(int **board, int grid_size, int *views, int row)
{
	int	i;
	int	count;
	int	largest;

	i = 0;
	count = 1;
	largest = board[row][i];
	while (i < (grid_size - 1))
	{
		if (largest < board[row][i + 1])
		{
			count ++;
			largest = board[row][i + 1];
		}
		i ++;
	}
	if (count <= views[grid_size * 2 + row] && \
		row_not_filled(board, grid_size, row))
		return (1);
	else if (count == views[grid_size * 2 + row] && \
		!row_not_filled(board, grid_size, row))
		return (1);
	return (0);
}

int	valid_right(int **board, int grid_size, int *views, int row)
{
	int	i;
	int	count;
	int	largest;

	i = grid_size - 1;
	count = 1;
	largest = board[row][i];
	while (i > 0)
	{
		if (largest < board[row][i - 1])
		{
			count ++;
			largest = board[row][i - 1];
		}
		i --;
	}
	if (count <= views[grid_size * 3 + row] && \
		row_not_filled(board, grid_size, row))
		return (1);
	else if (count == views[grid_size * 3 + row] && \
		!row_not_filled(board, grid_size, row))
		return (1);
	return (0);
}
