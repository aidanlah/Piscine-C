/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:26:39 by aileong           #+#    #+#             */
/*   Updated: 2024/01/14 16:26:28 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num_1;
	char	num_2;
	char	num_3;

	num_1 = '0';
	while (num_1 <= '7')
	{
		num_2 = num_1 + 1;
		while (num_2 <= '8')
		{
			num_3 = num_2 + 1;
			while (num_3 <= '9')
			{
				write(1, &num_1, 1);
				write(1, &num_2, 1);
				write(1, &num_3, 1);
				if (num_1 != '7' || num_2 != '8' || num_3 != '9')
					write(1, ", ", 2);
				num_3++;
			}
			num_2++;
		}
		num_1++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
