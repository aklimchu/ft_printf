/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:52:09 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/21 14:09:56 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printformat(va_list args, char format, int count)
{
	char	ch;

	if (format == 'c')
	{
		ch = va_arg(args, int);
		count = ft_putchar(ch, count);
	}
	if (format == 's')
		count = ft_putstr(va_arg(args, char *), count);
	if (format == 'p')
		count = ft_putptr(va_arg(args, void *), count);
	if (format == 'i' || format == 'd')
		count = ft_putnbr(va_arg(args, int), count);
	if (format == 'u')
		count = ft_putnbr_ui(va_arg(args, unsigned int), count);
	if (format == 'x' || format == 'X')
		count = ft_puthex(va_arg(args, long int), format, count);
	if (format == '%')
		count = ft_putchar('%', count);
	return (count);
}
