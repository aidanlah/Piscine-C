/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:34:24 by aileong           #+#    #+#             */
/*   Updated: 2024/01/21 17:18:36 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_left_right(int **board, int grid_size, int *views, int row);
int	valid_top_bottom(int **board, int grid_size, int *views, int col);
int	valid_no_repetition(int **board, int curr, int num, int grid_size);
int	calc_row(int curr, int grid_size);
int	calc_col(int curr, int grid_size);

int	check_left_right(int **board, int grid_size, int *views, int curr)
{
	int	row;
	int	col;

	row = calc_row(curr, grid_size);
	col = calc_col(curr, grid_size);
	if (col == grid_size - 1)
	{
		if (!valid_left_right(board, grid_size, views, row))
		{
			board[row][col] = 0;
			return (0);
		}
	}
	return (1);
}

int	check_top_bottom(int **board, int grid_size, int *views, int curr)
{
	int	row;
	int	col;

	row = calc_row(curr, grid_size);
	col = calc_col(curr, grid_size);
	if (row == grid_size - 1)
	{
		if (!valid_top_bottom(board, grid_size, views, col))
		{
			board[row][col] = 0;
			return (0);
		}
	}
	return (1);
}

int	ft_solver(int **board, int *views, int grid_size, int curr)
{
	int	num;

	num = 1;
	if (curr == grid_size * grid_size)
		return (1);
	if (board[calc_row(curr, grid_size)][calc_col(curr, grid_size)] != 0)
		return (ft_solver(board, views, grid_size, curr + 1));
	while (num <= grid_size)
	{
		if (valid_no_repetition(board, curr, num, grid_size))
		{
			board[calc_row(curr, grid_size)][calc_col(curr, grid_size)] = num;
			if (!check_left_right(board, grid_size, views, curr))
				return (0);
			if (!check_top_bottom(board, grid_size, views, curr))
				return (0);
			if (ft_solver(board, views, grid_size, curr + 1))
				return (1);
			board[calc_row(curr, grid_size)][calc_col(curr, grid_size)] = 0;
		}
		num ++;
	}
	return (0);
}
