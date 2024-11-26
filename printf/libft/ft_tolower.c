/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:16:50 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:39:07 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertir une lettre majuscule en minuscule

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
