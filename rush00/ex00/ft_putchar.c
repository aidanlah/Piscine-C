/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:23:23 by aileong           #+#    #+#             */
/*   Updated: 2024/01/13 15:50:59 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * This function prints a single char that has been passed as a param.
 * @param char c
 * @return void
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
