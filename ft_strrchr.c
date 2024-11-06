/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:42:57 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/11/05 13:38:45 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Description: Locates the last occurrence of a character in a string.

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)&str[len]);
	while (len > 0)
	{
		len--;
		if ((char)c == str[len])
			return ((char *)&str[len]);
	}
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, world!";
    char ch = 'o';
    char *result = ft_strrchr(str, ch);

    if (result != NULL) {
        printf("The last occurrence of 
'%c' is at position: %ld\n", ch, result - str);
        printf("Substring from last occurrence: \"%s\"\n", result);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
*/
