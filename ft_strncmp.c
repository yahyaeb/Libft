/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:23:20 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/05 12:20:37 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description: Compares up to a specified number of characters of two strings.
#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && i < num)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	if (i < num)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
