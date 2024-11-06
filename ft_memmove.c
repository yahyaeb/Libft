/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:54:39 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/05 21:23:00 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
copy a specified number of bytes from one memory area 
to another, handling overlapping memory regions safely
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	if (d < s)
	{
		while (i < n)
		{
			d[i++] = s[i++];
		}
	}
	else if (s < d)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
