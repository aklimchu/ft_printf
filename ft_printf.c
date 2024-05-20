/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:37:21 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/20 15:30:13 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;
	char	ch;
	
	count = 0;
	va_start(args, format);
	while (*++format)
	{
		if (*format == '%') // && error handling
		{
			count++;
			format++;
		}
		if (*format == 'c')
		{
			ch = va_arg(args, int);
			ft_putchar(ch);
		}
		if (*format == 's')
			ft_putstr(va_arg(args, char *));
		if (*format == 'p')
			putptr(va_arg(args, void *));
		if (*format == 'i')
			ft_putnbr(va_arg(args, int));
		if (*format == 'u')
			putnbr_ui(va_arg(args, unsigned int));
		if (*format == 'x')
			puthex(va_arg(args, long int), 1);
		if (*format == 'X')
			puthex(va_arg(args, long int), -1);
		if (*format == '%')
			ft_putchar('%');
		ft_putchar(*format); // shouldn't print identifiers
	}
	va_end(args);
	return(count);
}

#include <stdio.h>

// should print "-1" if error

int	main()
{
	char	*ptr = "MOI";
	
	//printf("test %ll");
	printf("MAKE YOUR DAY\n");
	ft_printf(" MAKE YOUR DAY\n");
	printf("original printf for x, %x\n", -12345);
	ft_printf("%x\n", -12345);
	printf("original printf for X, %X\n", 123345);
	ft_printf("%X\n", 123345);
	printf("original printf for x, %x\n", 0);
	ft_printf("%x\n", 0);
	printf("original printf for c, %c\n", 'a');
	ft_printf("%c\n", 'a');
	printf("original printf for s, %s\n", "MY NAME IS");
	ft_printf("%s\n", "MY NAME IS");
	printf("original printf for p, %p\n", ptr);
	ft_printf("%p\n", ptr);
	printf("original printf for d, %d\n", -155);
	ft_printf("%d\n", -155);
	printf("%d original printf for u, %u\n", -5, 10000);
	ft_printf("%d my ft_printf, %u\n", -5, 10000);
	printf("original printf for percentage sign, %%\n");
	ft_printf("%%\n");
}
