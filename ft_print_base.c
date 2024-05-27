/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:28:47 by nde-chab          #+#    #+#             */
/*   Updated: 2024/05/27 12:07:47 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base(char c, int n)
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
		ft_putchar('-');
	}
	if (nb > 15)
	{
		ft_print_base(c, nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb]);
}

int	main ()
{
	ft_print_base('X',0);
	return (0);
}