/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:06:56 by nde-chab          #+#    #+#             */
/*   Updated: 2024/05/27 16:42:44 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	ft_print_fuction(va_list agr_prt, char c, int *size)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(agr_prt, int), size);
	else if (c == 's')
		ft_putstr(va_arg(agr_prt, char *), size);
	else if (c == 'x' || c == 'X')
		ft_print_base(va_arg(agr_prt, int), c, size);
	else if (c == 'c')
		ft_putchar(va_arg(agr_prt, int), size);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	size_t	i;
	va_list	arg_prt;
	int		size;

	size = 0;
	count = 0;
	va_start(arg_prt, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				ft_putchar('%', &size);
			else
				ft_print_fuction(arg_prt, str[i], &size);
		}
		else
			ft_putchar(str[i], &size);
		i++;
	}
	return (size);
}
