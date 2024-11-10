/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:23:20 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/10 21:17:01 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description: Compares up to a specified number of characters of two strings.
#include "libft.h"

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
