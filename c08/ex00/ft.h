/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:07:42 by aileong           #+#    #+#             */
/*   Updated: 2024/01/25 18:16:41 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
/*
Include guards (Macro, Header, File guard) 
ensures that compiler will process this file only once,
no matter how many times it is included.
Include guards are just series of preprocessor directives
that guarantees file will only be included once.
Preprocessors used:
#ifndef: if not defined, determines if provided macros does not exists.
#define: Defines the macros.
#endif: Closes off #ifndef directive.
*/