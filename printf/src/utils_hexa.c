/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:16:29 by lnassar           #+#    #+#             */
/*   Updated: 2024/11/21 11:14:32 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_fd(unsigned int nb, char *base, int fd)
{
	if (nb >= 16)
		ft_puthexa_fd(nb / 16, base, fd);
	ft_putchar_fd(base[nb % 16], fd);
}

int	ft_puthexa(unsigned int nb, char *base)
{
	int	result;

	result = 0;
	ft_puthexa_fd(nb, base, 1);
	if (!nb)
		return (1);
	while (nb)
	{
		nb /= 16;
		result++;
	}
	return (result);
}

int	ft_putptr_fd(void *addr, int fd)
{
	unsigned long long int	address;
	char					address_str[16];
	int						digit_count;
	int						i;

	address = (unsigned long long int)addr;
	digit_count = 0;
	if (addr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	while (address > 0)
	{
		address_str[digit_count++] = "0123456789abcdef"[address % 16];
		address /= 16;
	}
	i = digit_count - 1;
	ft_putstr("0x");
	while (i >= 0)
		ft_putchar_fd(address_str[i--], fd);
	return (digit_count + 2);
}
