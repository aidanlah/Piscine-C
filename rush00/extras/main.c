/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:11:00 by aileong           #+#    #+#             */
/*   Updated: 2024/01/14 15:47:00 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush_00(int width, int height);
void	ft_rush_02(int widrh, int height);
void	ft_rush_03(int width, int height);
void	ft_rush_04(int width, int height);

int	main(void)
{
	write(1, "rush_00(5, 3)\n", 14);
	ft_rush_00(5, 3);
	write(1, "\nrush_02(5, 3)\n", 15);
	ft_rush_02(5, 3);
	write(1, "\nrush_03(5, 3)\n", 15);
	ft_rush_03(5, 3);
	write(1, "\nrush_04(5, 3)\n", 15);
	ft_rush_04(5, 3);
	return (0);
}
