/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:00:04 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 08:40:39 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr, int count)
{
	unsigned long	addr;
	char			buffer[20];
	char			*p;
	char			*hex_digits;

	hex_digits = "0123456789abcdef";
	addr = (unsigned long)ptr;
	p = buffer + sizeof(buffer) - 1;
	*p = '\0';
	if (!addr)
		*--p = '0';
	while (addr)
	{
		*--p = hex_digits[addr % 16];
		addr /= 16;
	}
	*--p = 'x';
	*--p = '0';
	if (ft_putstr(p, count) == -1)
		return (-1);
	return (count + ft_strlen(p));
}

// the funtion prints (void *) pointer argument in hexadecimal format
