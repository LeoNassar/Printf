/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:13:49 by lnassar           #+#    #+#             */
/*   Updated: 2024/11/26 15:42:42 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "libft.h"

int		ft_printf(const char *str, ...);

int		ft_putstr(char *str);
int		ft_putchar(char ch);

int		ft_putnbr(int nb);
void	ft_putunbr(unsigned int nb);
int		ft_putunbr_count(unsigned int nb);

int		ft_putptr_fd(void *addr, int fd);
int		ft_puthexa(unsigned int nb, char *base);
void	ft_puthexa_fd(unsigned int n, char *base, int fd);

#endif