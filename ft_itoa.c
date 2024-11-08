/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:12:24 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/08 22:46:00 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
//description: onverting an integer to a string,
including handling negative numbers and zero
*/

int count (int n)
{
    int i;
    if (n == 0)
        return 1;
    if(n < 0)
    {
        i++;
        n = -n;
    }
    while(n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}
char *ft_itoa()
{

}
