/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:21:31 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:33:00 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Appliquer une fonction à chaque caractère d'une chaîne
// en utilisant l'index de chaque caractère

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
	{
		return ;
	}
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}
