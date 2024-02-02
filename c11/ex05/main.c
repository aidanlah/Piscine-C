/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:54:06 by aileong           #+#    #+#             */
/*   Updated: 2024/01/31 14:54:08 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/ft.h"

void	init(char *operators, t_operation *ops)
{
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '*';
	operators[3] = '/';
	operators[4] = '%';
	operators[5] = '\0';
	ops[0] = add;
	ops[1] = subt;
	ops[2] = mult;
	ops[3] = div;
	ops[4] = mod;
}

int	main(int ac, char *av[])
{
	int			i;
	char		operators[6];
	t_operation	ops[5];

	i = -1;
	if (ac == 4)
	{
		init(operators, ops);
		while (++i < 5)
		{
			if (av[2][0] == operators[i])
			{
				if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
					write(1, "Stop : division by zero", 24);
				else if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
					write(1, "Stop : modulo by zero", 22);
				else
					ft_putnbr(ops[i](ft_atoi(av[1]), ft_atoi(av[3])));
				write(1, "\n", 1);
				return (0);
			}
		}
		write(1, "0\n", 1);
	}
	return (0);
}
