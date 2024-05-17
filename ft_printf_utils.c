#include "ft_printf.h"

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putstr(char *str)
{
        while (*str != '\0')
        {
                write (1, str, 1);
                str = str + 1;
        }
}

void    ft_putnbr(int nb) // will the function work with unsigned int?
{
        if (nb == -2147483648)
        {
                write(1, "-", 1);
                write(1, "2", 1);
                nb = 147483648;
        }
        if (nb < 0)
        {
                write(1, "-", 1);
                nb *= -1;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        if (nb < 10)
        {
                ft_putchar(nb + '0');
        }
}

void    ft_putnbr_ui(unsigned int nb)
{
        if (nb >= 10)
        {
                ft_putnbr_ui(nb / 10);
                ft_putnbr_ui(nb % 10);
        }
        if (nb < 10)
        {
                ft_putchar(nb + '0');
        }
}

