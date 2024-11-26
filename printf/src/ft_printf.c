/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:16:24 by lnassar           #+#    #+#             */
/*   Updated: 2024/11/26 15:42:44 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_var(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	if (type == 's')
		return (ft_putstr((char *)va_arg(args, char *)));
	if (type == 'p')
		return (ft_putptr_fd((void *)va_arg(args, void *), 1));
	if (type == 'd')
		return (ft_putnbr((int)va_arg(args, int)));
	if (type == 'i')
		return (ft_putnbr((int)va_arg(args, int)));
	if (type == 'u')
		return (ft_putunbr_count((unsigned int)va_arg(args, unsigned int)));
	if (type == 'x')
		return (ft_puthexa((int)va_arg(args, int), "0123456789abcdef"));
	if (type == 'X')
		return (ft_puthexa((int)va_arg(args, int), "0123456789ABCDEF"));
	if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += ft_put_var(str[i], args);
			i++;
		}
		if (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

/* int	main()
{
	ft_printf("%d", ft_printf(" %x ", -1));
} */
