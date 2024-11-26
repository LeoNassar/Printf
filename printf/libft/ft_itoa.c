/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:18:14 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:04:16 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convertir un entier en chaîne de caractères

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		int_len;
	int		nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	int_len = ft_nbrlen(n);
	str = malloc((int_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nb = n;
	str[int_len] = 0;
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--int_len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
