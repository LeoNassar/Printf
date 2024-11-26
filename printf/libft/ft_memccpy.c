/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:14:19 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/29 12:22:07 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copier jusqu’a n octets de src vers dst
//en s’arretant si le caractere c est trouve

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (d + (i + 1));
		i++;
	}
	return (NULL);
}
