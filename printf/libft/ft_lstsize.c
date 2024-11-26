/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:24:26 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 11:41:20 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compter le nombre d’éléments dans une liste chaînée.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst-> next;
		++i;
	}
	return (i);
}
