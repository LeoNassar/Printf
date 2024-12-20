/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:36:59 by lnassar           #+#    #+#             */
/*   Updated: 2024/11/21 11:15:18 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int nb)
{
	int	result;

	result = 0;
	ft_putnbr_fd(nb, 1);
	if (!nb)
		return (1);
	if (nb < 0)
		result++;
	while (nb)
	{
		nb /= 10;
		result++;
	}
	return (result);
}

void	ft_putunbr(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, 1);
		ft_putchar_fd((nb % 10) + '0', 1);
	}
	else
		ft_putchar_fd(nb + '0', 1);
}

int	ft_putunbr_count(unsigned int nb)
{
	int	result;

	result = 0;
	ft_putunbr(nb);
	if (!nb)
		return (1);
	while (nb)
	{
		nb /= 10;
		result++;
	}
	return (result);
}
