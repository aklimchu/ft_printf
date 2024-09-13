/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:57:05 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 08:41:17 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//The function prints a string
int	ft_putstr(char *str, int count)
{
	if (!str)
	{
		count = ft_putstr("(null)", count);
		if (count == -1)
			return (-1);
	}
	while (str && *str != '\0')
	{
		if (write (1, str, 1) == -1)
			return (-1);
		str = str + 1;
		count++;
	}
	return (count);
}
