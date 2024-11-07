/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:52:19 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/07 20:47:37 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// concatenates s1 & s2 into a new string.
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}
