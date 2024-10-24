/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:28:47 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/24 20:33:34 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!alst || !new)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		temp = *alst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
