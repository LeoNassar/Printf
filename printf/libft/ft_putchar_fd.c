/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:25:22 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:09:57 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ecrire un caractère c dans le descripteur de fichier fd

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
