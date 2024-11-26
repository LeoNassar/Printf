/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:08:40 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:30:57 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calculer la longueur d'une chaîne de caractères

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i += 1;
	}
	return (i);
}
