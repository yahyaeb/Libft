/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:07:54 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/10 21:12:06 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//check if c is a printable value
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
