/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:22:49 by aileong           #+#    #+#             */
/*   Updated: 2024/01/23 23:28:57 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	count;

	count = 1;
	j = 0;
	while (argc > count)
	{
		i = 0;
		j ++;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i ++;
		}
		write(1, "\n", 1);
		count ++;
	}
	return (0);
}
