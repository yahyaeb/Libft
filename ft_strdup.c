/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:31:56 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/05 16:49:37 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Duplicates a string by allocating memory 
for a new copy and returning a pointer to it.
*/
char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		len;

	len = ft_strlen(str) + 1;
	cpy = malloc((len) * sizeof(char));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, str, len);
	return (cpy);
}
