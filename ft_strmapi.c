/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:29:48 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/21 15:58:51 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    // Allocate memory for the new string
    char * str;
    unsigned int i;

    if(!s)
        return NULL;
    
    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(str == NULL)
        return NULL;
    
    while(s[i] != '\0')
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}
