/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:04:18 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/21 14:53:17 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printformat(va_list args, char format, int count);
int		ft_putchar(char c, int count);
int		ft_putstr(char *str, int count);
int		ft_putnbr(int num, int count);
int		ft_putnbr_ui(unsigned int num, int count);
int		ft_putptr(void *p, int count);
int		ft_puthex(int num, char lower_case, int count);

#endif /* FT_PRINTF_H */
