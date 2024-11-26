/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:56:44 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:03:28 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Vérifie si le caractère est alphanumérique (chiffre ou lettre)

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
