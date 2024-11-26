/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:03:23 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 11:53:45 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ajouter un nouvel élément au début d’une liste chaînée

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}
