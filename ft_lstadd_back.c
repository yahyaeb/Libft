/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:52:53 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/10 15:02:04 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;
    if(!lst || !new)
        return ;
    
    if(!*lst)
        *lst = new;
    else
    {
        temp = *lst;
        while (temp->next)
            temp = temp->next;
        temp->next = new;
    }
}