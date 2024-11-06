/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:24:49 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/11/05 20:44:47 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Description: locate a substring within a larger string up to n number of chars
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (len == 0 && (!haystack || !needle))
		return (NULL);
	i = 0;
	while (haystack[i] && i + needle_len <= len)
	{
		if ((ft_strncmp(&haystack[i], needle, needle_len) == 0))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
