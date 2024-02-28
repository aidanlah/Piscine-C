/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:35:25 by aileong           #+#    #+#             */
/*   Updated: 2024/02/28 22:35:26 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *c)
{
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * ft_strlen(c) + 1);
	if (!ptr)
		return (NULL);
	return (ft_strcpy(ptr, c));
}
