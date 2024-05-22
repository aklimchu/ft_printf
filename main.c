/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c			                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:51:07 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 11:05:22 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

// The function can be used for testing ft_printf project.
// It can be compiled together with libftprintf.a after
// making the Makefile.

int	main()
{
	char	*ptr = "MOI";

	printf("original -  %p %p\n", NULL, NULL);
	ft_printf("my version - %p %p\n", NULL, NULL);
	printf("original - NULL %s NULL \n", NULL);
	ft_printf("my version - NULL %s NULL \n", NULL);
	printf("original - MAKE YOUR DAY\n");
	ft_printf("my version - MAKE YOUR DAY\n");
	printf("original printf for x, %x\n", -12345);
	ft_printf("my version %x\n", -12345);
	printf("original printf for X, %X\n", 123345);
	ft_printf("my version %X\n", 123345);
	printf("original printf for x, %x\n", 0);
	ft_printf("my version %x\n", 0);
	printf("original printf for c, %c\n", 'a');
	ft_printf("my version %c\n", 'a');
	printf("original printf for s, %s\n", "MY NAME IS");
	ft_printf("my version %s\n", "MY NAME IS");
	printf("original printf for p, %p\n", ptr);
	ft_printf("my version %p\n", ptr);
	printf("original printf for d, %d\n", -155);
	ft_printf("my version %d\n", -155);
	printf("%d original printf for u, %u\n", -5, 10000);
	ft_printf("%d my ft_printf, %u\n", -5, 10000);
	printf("original printf for percentage sign, %%\n");
	ft_printf("my version, %%\n");
}
