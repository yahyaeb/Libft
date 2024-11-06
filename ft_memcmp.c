/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:33:17 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/11/05 14:28:09 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Compares two blocks 
of memory for a specified number of bytes.
*/
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = ptr1;
	str2 = ptr2;
	while (i < num)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
