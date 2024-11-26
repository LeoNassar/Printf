/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:22:35 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:32:02 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copier une chaîne source (src) dans une chaîne destination (dst), 
// tout en respectant une taille limite (dstsize)

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	if (size == 0)
		return (count);
	i = 0;
	while (src[i] != '\0' && i < ((size_t)size - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (count);
}
