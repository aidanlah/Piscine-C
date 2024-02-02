/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:28:59 by aileong           #+#    #+#             */
/*   Updated: 2024/01/16 14:21:39 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex(char c)
{
	char	hex[2];

	hex[0] = (c / 16) + '0';
	if (hex[0] > '9')
	{
		hex[0] += 39;
	}
	hex[1] = (c % 16) + '0';
	if (hex[1] > '9')
	{
		hex[1] += 39;
	}
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			write_hex(*str);
		}
		else
		{
			write(1, &*str, 1);
		}
		str ++;
	}
}

/*
int main() {
    char str1[] = "Coucou\ntu vas bien";
    char str2[] = "";
    char str3[] = "\x01";
    char str4[] = "\x1F";
    char str5[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str6[] = "0123456789";
    char str7[] = "This is a long string. It has more than 16 bytes.";
    char str8[] = "Some\0arandom\09text\0fwith\0anon-printable\0dcharacters";

    ft_putstr_non_printable(str1);
	write(1, "\n", 1);
    ft_putstr_non_printable(str2);
	write(1, "\n", 1);
    ft_putstr_non_printable(str3);
	write(1, "\n", 1);
    ft_putstr_non_printable(str4);
	write(1, "\n", 1);
    ft_putstr_non_printable(str5);
	write(1, "\n", 1);
    ft_putstr_non_printable(str6);
	write(1, "\n", 1);
    ft_putstr_non_printable(str7);
	write(1, "\n", 1);
    ft_putstr_non_printable(str8);
	write(1, "\n", 1);

    return 0;
}
*/
