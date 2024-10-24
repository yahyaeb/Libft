/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:46:25 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/24 21:06:10 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* int main()
{
    char *str1 = NULL;
    char *str2 =  NULL;
 
    puts("str1 before memcpy ");
    puts(str1);
 
    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, 0);
 
    puts("\nstr1 after memcpy ");
    puts(str1);
 
    return 0;
} */