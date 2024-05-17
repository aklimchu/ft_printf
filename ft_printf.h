/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:04:18 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/08 15:25:18 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
void	ft_putchar(char);
void	ft_putstr(char *);
void	ft_putnbr(int);
void	ft_putnbr_ui(unsigned int);
void	ft_putptr(void *);
void	ft_puthex(char *, int); // upper/lower case

#endif /* FT_PRINTF_H */
