/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:37:02 by aileong           #+#    #+#             */
/*   Updated: 2024/01/14 16:38:19 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
 * This function prints a row of characters by calling ft_putchar.
 *
 * @param	int width
 * @param	char left
 * @param	char middle
 * @param	char right
 */
void	ft_print_row(int width, char left, char middle, char right)
{
	int	i;

	i = 3;
	ft_putchar(left);
	if (width > 1)
	{
		while (i <= width)
		{
			ft_putchar(middle);
			i++;
		}
		ft_putchar(right);
	}
	write(1, "\n", 1);
}

/*
 * This rush function that calculates what characters should be printed
 * to fulfil a specified shape using characters '/', '*', and '\'. 
 *
 * @param	int	width
 * @parm	int height
 */
void	rush(int width, int height)
{
	int	i;

	i = 3;
	if (width <= 0 || height <= 0)
	{
		write(1, "Invalid Value(s)\n", 17);
		return ;
	}
	ft_print_row(width, '/', '*', '\\');
	if (height > 1)
	{
		while (i <= height)
		{
			ft_print_row(width, '*', ' ', '*');
			i++;
		}
		ft_print_row(width, '\\', '*', '/');
	}
}
