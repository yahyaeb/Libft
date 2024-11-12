/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:04:08 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:31 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Copies a string to a destination 
buffer with a max length to prevent overflow.
*/
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;
	size_t	dst_or_length;

	i = 0;
	if ((!src || !dst) && dstsize == 0)
		return (0);
	src_length = ft_strlen((char *)src);
	dst_length = ft_strlen((char *)dst);
	dst_or_length = dst_length;
	if (dstsize == 0)
		return (src_length);
	if (dstsize <= dst_length)
		return (src_length + dstsize);
	while (dst_length < dstsize - 1 && i < src_length)
	{
		dst[dst_length] = src[i];
		i++;
		dst_length++;
	}
	dst[dst_length] = '\0';
	return (dst_or_length + src_length);
}
