/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   known_cells.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oli-chin <oli-chin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:51:18 by oli-chin          #+#    #+#             */
/*   Updated: 2024/01/21 17:10:41 by oli-chin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set_single_value(int **board, int i, int grid_size, int value)
{
	if (i >= grid_size * 3)
	{
		board[i % grid_size][grid_size - 1] = value;
	}
	else if (i >= grid_size * 2)
	{
		board[i % grid_size][0] = value;
	}
	else if (i >= grid_size)
	{
		board[grid_size - 1][i % grid_size] = value;
	}
	else
	{
		board[0][i] = value;
	}
}

void	ft_set_pattern(int **board, int i, int grid_size)
{
	int	j;

	j = 0;
	while (j < grid_size)
	{
		if (i >= grid_size * 3)
			board[i % grid_size][j] = grid_size - j;
		else if (i >= grid_size * 2)
			board[i % grid_size][j] = j + 1;
		else if (i >= grid_size)
			board[j][i % grid_size] = grid_size - j;
		else
			board[j][i % grid_size] = j + 1;
		j++;
	}
}

void	ft_set_confirmed(int **board, int *views, int num_views, int grid_size)
{
	int	i;

	i = 0;
	while (i < num_views)
	{
		if (views[i] == 1)
		{
			ft_set_single_value(board, i, grid_size, grid_size);
		}
		else if (views[i] == grid_size)
		{
			ft_set_pattern(board, i, grid_size);
		}
		i++;
	}
}
