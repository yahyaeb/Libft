/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:38:23 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/10 21:15:30 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// Fills the first `num` bytes of the memory 
// area pointed to by `ptr` with the constant byte `value`.
void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)ptr;
	while (i < num)
	{
		str[i] = (char)value;
		i++;
	}
	return (str);
}

/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
   ft_memset(str + 13, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
*/
