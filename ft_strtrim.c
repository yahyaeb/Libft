/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:41:14 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/24 20:44:47 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_str;
	int		i;
	int		start;
	int		len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (len >= start && ft_strchr(set, s1[len]))
		len--;
	new_str = (char *)malloc((len - start + 2) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (start <= len)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}
