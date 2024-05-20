/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:04:18 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/20 15:04:03 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *, ...);
void	ft_putchar(char);
void	ft_putstr(char *);
void	ft_putnbr(int);
void	putnbr_ui(unsigned int);
void	putptr(void *);
void	puthex(long int, int); // upper/lower case
size_t	ft_strlen(const char *c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif /* FT_PRINTF_H */
