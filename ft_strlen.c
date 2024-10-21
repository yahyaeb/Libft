/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:42 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/21 15:57:22 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/* int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		printf("%i", str_len(argv[1]));
	}
	else
	{
		write(1, "\n", 1);
	}
}
*/
