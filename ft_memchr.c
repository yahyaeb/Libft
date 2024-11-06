/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:44:59 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/11/05 13:39:25 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Searches for the first 
occurrence of a character in a block of memory.
i*/
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*str;
	size_t				i;

	str = ptr;
	i = 0;
	while (i < num)
	{
		if (str[i] == (unsigned char)value)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
