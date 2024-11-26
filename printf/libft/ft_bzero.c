/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:31:18 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:02:38 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Remplir les n premiers octets de la zone mémoire pointée par s avec des zéros

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n)
	{
		*ptr++ = 0;
		n--;
	}
}
