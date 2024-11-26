/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:33:18 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 11:43:55 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Supprimer un seul nœud de la liste en libérant sa mémoire

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
