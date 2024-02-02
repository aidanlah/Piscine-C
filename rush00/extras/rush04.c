/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:27:28 by aileong           #+#    #+#             */
/*   Updated: 2024/01/14 16:37:53 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_row(int width, char left, char middle, char right);

/*
 * This rush function that calculates what characters should be printed
 * to fulfil a specified shape using characters 'A', 'B', and 'C'.
 *
 * @param	int width
 * @param	int height
 */
void	ft_rush_04(int width, int height)
{
	int	i;

	i = 3;
	if (width <= 0 || height <= 0)
	{
		write(1, "Invalid Value(s)\n", 17);
		return ;
	}
	ft_print_row(width, 'A', 'B', 'C');
	if (height > 1)
	{
		while (i <= height)
		{
			ft_print_row(width, 'B', ' ', 'B');
			i++;
		}
		ft_print_row(width, 'C', 'B', 'A');
	}
}
