/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:47:56 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:54 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Allocates memory for an array of `count` elements 
//of `size` bytes each and initializes all bytes to zero.
void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (size != 0 && count > 2147483647 / size)
		return (NULL);
	str = malloc((count * size));
	if (!str)
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}
