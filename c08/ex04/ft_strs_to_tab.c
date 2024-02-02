/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:13:28 by aileong           #+#    #+#             */
/*   Updated: 2024/01/27 15:41:36 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strcpy_malloc(char *src)
{
	char	*dest;
	char	*ori_dest;
	int		i;

	i = 0;
	while (src[i])
		i ++;
	dest = (char *) malloc(sizeof(char) * (i + 1));
	if (!dest)
	{
		free(dest);
		return (NULL);
	}
	ori_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (ori_dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
	{
		free(stock);
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcpy_malloc(av[i]);
		i ++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
