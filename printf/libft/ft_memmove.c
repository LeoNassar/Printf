/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:09:24 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:09:29 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copier n octets de src vers dst, même si les zones se chevauchent

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*dst_cpy;

	if (!dst && !src)
		return (NULL);
	dst_cpy = dst;
	if (dst > src && (size_t)(dst - src) < n)
	{
		dst += n - 1;
		src += n - 1;
		while (n--)
			*(char *)dst-- = *(char *)src--;
	}
	else
		while (n--)
			*(char *)dst++ = *(char *)src++;
	return (dst_cpy);
}
