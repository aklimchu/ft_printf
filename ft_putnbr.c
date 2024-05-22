/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:57:51 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 08:38:47 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int count)
{
	if (nb == -2147483648)
	{
		count = ft_putchar('-', count);
		if (count == -1)
			return (-1);
		count = ft_putchar('2', count);
		if (count == -1)
			return (-1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		count = ft_putchar('-', count);
		if (count == -1)
			return (-1);
		nb *= -1;
	}
	count = ft_putnbr_ui(nb, count);
	return (count);
}

// the function prints an integer in base 10
