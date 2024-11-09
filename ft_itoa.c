/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:12:24 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/09 10:21:53 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
//description: onverting an integer to a string,
including handling negative numbers and zero
*/

int	count_int_array(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	len;
	long	num;
	char	*results;

	num = n;
	len = count_int_array(n);
	if (n < 0)
		num = num * -1;
	results = malloc((len + 1) * sizeof(char));
	if (!results)
		return (NULL);
	if (n < 0)
		results[0] = '-';
	results[len] = '\0';
	if (num == 0)
		results[0] = '0';
	else
	{
		while (num != 0)
		{
			results[--len] = num % 10 + '0';
			num /= 10;
		}
	}
	return (results);
}
