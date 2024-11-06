/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:04:08 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/05 16:15:38 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Copies a string to a destination 
buffer with a max length to prevent overflow.
*/
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	available_space;
	size_t	i;

	if ((!dest || !src) && size == 0)
		return (0);
	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (len_dst > size)
		return (size + len_src);
	available_space = size - len_dst;
	i = 0;
	while (i < available_space - 1 && src[i])
	{
		dest[len_dst + i] = src[i];
		i++;
	}
	dest[len_dst + i] = '\0';
	return (len_dst + len_src);
}
