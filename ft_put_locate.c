/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_locate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:05:50 by nde-chab          #+#    #+#             */
/*   Updated: 2024/05/27 19:22:27 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_locate(unsigned long nb,int *size)
{
	char *base;

	base = "0123456789abcdef";
	if (nb > 15)
	{
		ft_put_locate( nb / 16, size);
		ft_putchar(base[nb % 16], size);
	}
	else
		ft_putchar(base[nb], size);
}