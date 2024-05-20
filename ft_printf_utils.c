/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:38:27 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/20 15:16:19 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void    putnbr_ui(unsigned int nb)
{
        if (nb >= 10)
        {
                putnbr_ui(nb / 10);
                putnbr_ui(nb % 10);
        }
        if (nb < 10)
        {
                ft_putchar(nb + '0');
        }
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	int		*p;

	i = 0;
	p = NULL;
	if (dst == NULL && src != NULL)
		*p = 10;
	if (dst == NULL && src == NULL)
		return ((void *) 0);
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		i++;
	}
	return (dst - i);
}

size_t	ft_strlen(const char *c)
{
	size_t		i;

	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;

	lensrc = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (lensrc);
	while (i + 1 < dstsize && (*src))
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;
	return (lensrc);
}
