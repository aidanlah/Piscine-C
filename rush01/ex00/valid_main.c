/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:31:50 by aileong           #+#    #+#             */
/*   Updated: 2024/01/21 16:35:42 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_top(int **board, int grid_size, int *views, int col);
int	valid_bottom(int **board, int grid_size, int *views, int col);
int	valid_left(int **board, int grid_size, int *views, int row);
int	valid_right(int **board, int grid_size, int *views, int row);

int	valid_top_bottom(int **board, int grid_size, int *views, int col)
{
	int	flag;

	flag = valid_top(board, grid_size, views, col) && \
			valid_bottom(board, grid_size, views, col);
	return (flag);
}

int	valid_left_right(int **board, int grid_size, int *views, int row)
{
	int	flag;

	flag = valid_left(board, grid_size, views, row) && \
			valid_right(board, grid_size, views, row);
	return (flag);
}

int	valid_no_repetition(int **board, int curr, int num, int grid_size)
{
	int	i;
	int	row;
	int	col;

	i = 0;
	row = curr / grid_size;
	col = curr % grid_size;
	while (i < grid_size)
	{
		if (board[row][i] == num && i != col)
			return (0);
		if (board[i][col] == num && i != row)
			return (0);
		i++;
	}
	return (1);
}
