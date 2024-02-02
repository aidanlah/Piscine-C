/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_ext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:41:19 by aileong           #+#    #+#             */
/*   Updated: 2024/01/21 16:32:35 by echow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	row_not_filled(int **board, int grid_size, int row)
{
	int	i;

	i = 0;
	while (i < grid_size)
	{
		if (board[row][i] == 0)
			return (1);
		i++;
	}
	return (0);
}

int	col_not_filled(int **board, int grid_size, int col)
{
	int	i;

	i = 0;
	while (i < grid_size)
	{
		if (board[i][col] == 0)
			return (1);
		i++;
	}
	return (0);
}
