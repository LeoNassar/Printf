/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:14:16 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:38:46 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Supprimer les caractères spécifiques du début et de la fin d'une chaîne

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	len;

	while (*s1 && ft_strchr(set, *s1))
		++s1;
	len = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[len - 1]))
		--len;
	trimmed = malloc(len + 1);
	if (trimmed)
	{
		ft_memcpy(trimmed, s1, len);
		trimmed[len] = '\0';
	}
	return (trimmed);
}
