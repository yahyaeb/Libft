/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:54:39 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/06 21:25:43 by yel-bouk         ###   ########.fr       */
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

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
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
