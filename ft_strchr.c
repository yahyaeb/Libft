/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:29:26 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/11/10 21:16:34 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Description: Locates the first occurrence of a character in a string.
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*
int main() {
    char str[] = "Hello, world!";
    char *result = ft_strchr(str, 'o');
    
    if (result != NULL) {
        printf("Character found at position: %ld\n", result - str);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}
*/
