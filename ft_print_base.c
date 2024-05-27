/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:28:47 by nde-chab          #+#    #+#             */
/*   Updated: 2024/05/27 16:40:13 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base(char c, int n, int *size)
{
	char	*base;
	long	nb;

	nb = n;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-', size);
	}
	if (nb > 15)
	{
		ft_print_base(c, nb / 16, size);
		ft_putchar(base[nb % 16], size);
	}
	else
		ft_putchar(base[nb], size);
}
