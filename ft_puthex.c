/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:00:32 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/21 14:01:01 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int num, char lower_case, int count)
{
	char			buffer[17];
	char			*p;
	char			hex_digits[17];
	unsigned int	unsigned_num;

	ft_strlcpy(hex_digits, "0123456789abcdef", 17);
	if (lower_case == 'X')
		ft_strlcpy(hex_digits, "0123456789ABCDEF", 17);
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
	return (ft_putstr(p, count));
}
