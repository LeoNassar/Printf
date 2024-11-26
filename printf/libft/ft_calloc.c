/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:07:39 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:03:17 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allouer de la mémoire pour un tableau 
//de nmemb éléments de size octets, initialisée à 0

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
