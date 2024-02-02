/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oli-chin <oli-chin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:24:07 by oli-chin          #+#    #+#             */
/*   Updated: 2024/01/21 18:33:33 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_initialize_board(int **board, int grid_size);
void	ft_print_board(int **board, int grid_size);
void	ft_set_confirmed(int **board, int *views, int num_views, int grid_size);
int		ft_solver(int **board, int *views, int grid_size, int curr);
int		ft_count_views(char *str);
int		ft_check_range(char *str, int grid_size);

void	ft_print_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

void	ft_str_to_arr(char *str, int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		arr[j] = str[i] - '0';
		i += 2;
		j++;
	}
}

void	ft_run(char *argv[], int num_views)
{
	int	*views;
	int	grid_size;
	int	**board;

	grid_size = num_views / 4;
	if (ft_check_range(argv[1], grid_size))
		ft_print_error();
	views = (int *) malloc(num_views * sizeof(int));
	ft_str_to_arr(argv[1], views);
	board = (int **) malloc(grid_size * sizeof(int *));
	ft_initialize_board(board, grid_size);
	if (ft_solver(board, views, grid_size, 0))
		ft_print_board(board, grid_size);
	else
		ft_print_error();
	free(views);
	free(board);
}

int	main(int argc, char *argv[])
{
	int	num_views;

	if (argc == 2)
	{
		num_views = ft_count_views(argv[1]);
		if (num_views < 16 || num_views > 36 || num_views % 4 != 0)
			ft_print_error();
		else
		{
			ft_run(argv, num_views);
		}
	}
	else
		ft_print_error();
	return (0);
}
