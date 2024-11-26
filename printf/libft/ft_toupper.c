/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:14:04 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 14:39:15 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertir une lettre minuscule en majuscule

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
