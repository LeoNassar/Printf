/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:05:16 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:04:05 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Vérifie si le caractère est imprimable

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c > 31 && c < 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
