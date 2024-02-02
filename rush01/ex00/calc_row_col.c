/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_row_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:58:43 by aileong           #+#    #+#             */
/*   Updated: 2024/01/21 17:01:55 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	calc_row(int curr, int grid_size)
{
	return (curr / grid_size);
}

int	calc_col(int curr, int grid_size)
{
	return (curr % grid_size);
}
