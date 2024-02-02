/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:45:40 by aileong           #+#    #+#             */
/*   Updated: 2024/01/18 13:42:07 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	valid_base(char *base)
{
	if (*base == '\0' && *(base + 1) == '\0')
		return (0);
	else
	{
		while (*base != '\0')
		{
			if (*base == *(base + 1) || *base == '-' || *base == '+')
				return (0);
			else if (*base == '\t' || *base == '\n' || *base == '\v')
				return (0);
			else if (*base == '\f' || *base == '\r' || *base == ' ')
				return (0);
			base ++;
		}
		return (1);
	}
}

int	base_type(char *base, char *str)
{
	if (!(*base && *str))
		return (1);
	if (*base == *str && *base && *str)
		return (base_type(base + 1, str + 1));
	return (0);
}

void	ft_putnbr(int nb, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len += 1;
	if (base_len == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbr(-(nb / base_len), base);
			ft_putchar(base[-(nb % base_len)]);
			return ;
		}
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (valid_base(base))
	{
		if (base_type(base, "0123456789"))
			ft_putnbr(nbr, base);
		else if (base_type(base, "01"))
			ft_putnbr(nbr, base);
		else if (base_type(base, "0123456789ABCDEF"))
			ft_putnbr(nbr, base);
		else if (base_type(base, "poneyvif"))
			ft_putnbr(nbr, base);
	}
}

/*
int	main()
{
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	return 0;
}
*/
