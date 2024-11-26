/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:08:08 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:38:57 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Extraire une sous-chaîne d'une chaîne existante

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	k;

	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str || !s)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (i >= start && k < len)
		{
			sub_str[k] = s[i];
			k++;
		}
		i++;
	}
	sub_str[k] = '\0';
	return (sub_str);
}
