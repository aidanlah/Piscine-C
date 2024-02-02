/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:32:12 by aileong           #+#    #+#             */
/*   Updated: 2024/01/31 15:32:14 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef int	(*t_operation)(int, int);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		add(int a, int b);
int		subt(int a, int b);
int		mult(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif
