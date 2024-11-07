/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:13:28 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/06 21:30:31 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//write a single character to a specified file descriptor.
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
