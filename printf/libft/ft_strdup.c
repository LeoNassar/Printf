/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:42:44 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:33:16 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allouer une nouvelle chaîne et copier la chaîne source (s1) dans celle-ci

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s) + 1;
	new = (char *)malloc(sizeof(*new) * len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}
