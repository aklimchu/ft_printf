#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;
	
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format++ == "%") // && error handling
			count++;
		if (*format == 'c')
			ft_putchar(va_arg(args, char));
		if (*format == 's')
			ft_putstr(va_arg(args, char *));
		if (*format == 'p')
			ft_putptr(va_arg(args, void *));
		if (*format == 'i')
			ft_putnbr(va_arg(args, int));
		if (*format == 'u')
			ft_putnbr_ui(va_arg(args, unsigned int));
		if (*format == 'x')
			ft_puthex(va_arg(args, char *), 0);
		if (*format == 'X')
			ft_puthex(va_arg(args, char *), 1);
		if (*format == '%')
			ft_putchar('%');
		format++;
	}
	va_end(args);
	return(count);
}

int	main()
{
	//ft_printf("START", 3, "MAKE", "YOUR", "DAY");
	//printf("test %ll");
}
