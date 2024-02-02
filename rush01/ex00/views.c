/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oli-chin <oli-chin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:56:40 by oli-chin          #+#    #+#             */
/*   Updated: 2024/01/21 16:57:00 by oli-chin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_views(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] >= '1' && str[i] <= '9')
				count++;
			else
				return (-1);
		}
		else
		{
			if (str[i] != ' ')
				return (-1);
		}
		i++;
	}
	return (count);
}

int	ft_check_range(char *str, int grid_size)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '1' || str[i] > grid_size)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
