/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:00:42 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:03:38 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Vérifie si le caractère est une lettre (majuscule ou minuscule)

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
