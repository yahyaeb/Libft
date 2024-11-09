/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:28:59 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/09 14:59:10 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//removing specific characters from both ends of a string
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int			start;
	int			len;
	int			i;
	char		*new_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (len >= start && ft_strchr(set, s1[len]))
		len--;
	new_str = malloc((len - start + 2) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (start <= len)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}
