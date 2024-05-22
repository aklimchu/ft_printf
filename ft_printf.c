/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:37:21 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 08:35:54 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = ft_printformat(args, *format++, count);
		}
		else
			count = ft_putchar(*format++, count);
		if (count == -1)
			return (-1);
	}
	va_end(args);
	return (count);
}

// the variadic function receives the arguments (args is
// a pointer to the last fixed argument) and passes them
// to ft_printfformat for further processing
// "count" is a variable used for counting the number of printed characters
