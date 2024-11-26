/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:02:39 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:03:48 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Vérifie si le caractère fait partie de la table ASCII

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
