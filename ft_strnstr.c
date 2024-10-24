/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:42:30 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/24 21:01:35 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (len == 0 && (!haystack || !needle))
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		x = 0;
		while (needle[x] && haystack[i + x] && (i + x) < len
			&& needle[x] == haystack[i + x])
			x++;
		if (needle[x] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
