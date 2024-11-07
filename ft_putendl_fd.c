/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:34:03 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/06 21:37:20 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//write a string followed by a newline to a specified file descriptor.
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
