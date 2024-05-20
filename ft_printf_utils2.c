/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:53:53 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/20 14:06:57 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

void putptr(void *ptr)
{
	unsigned long	addr;
	char			buffer[20];
	char			*p;
	char			*hex_digits;
	
	hex_digits = "0123456789abcdef";
	addr = (unsigned long)ptr;
	p = buffer + sizeof(buffer) - 1;
	*p = '\0';

	while (addr)
	{
		*--p = hex_digits[addr % 16];
		addr /= 16;
	}
	
	*--p = 'x';
	*--p = '0';
	ft_putstr(p);
}

void puthex(long int num, int lower_case)
{
	char				buffer[17];
	char				*p;
	char				hex_digits[17];
	unsigned long int	unsigned_num;
	
	ft_strlcpy(hex_digits, "0123456789abcdef", 17);
	if (lower_case != 1)
		ft_strlcpy(hex_digits, "0123456789ABCDEF", 17);
	if (num > INT_MAX || num < INT_MIN)
		unsigned_num = (unsigned long int)num;
	else
		unsigned_num = (unsigned int)num;
	p = buffer + sizeof(buffer) - 1;
	*p = '\0';
	if (unsigned_num == 0)
		*--p = '0';	
	else
	{	
		while (unsigned_num > 0)
		{
			*--p = hex_digits[unsigned_num % 16];
			unsigned_num /= 16;
		}
	}
	ft_putstr(p);
}
