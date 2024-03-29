/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:05:21 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/29 16:26:01 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(n * (-1), count);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0', count);
}

void	ft_putnbr_base(unsigned long nbr, unsigned long size, \
					char *base, int *count)
{
	if (nbr < 0)
	{
		ft_putchar('-', count);
		nbr = nbr * -1;
		ft_putnbr_base(nbr, size, base, count);
	}
	else if (nbr / size)
	{
		ft_putnbr_base(nbr / size, size, base, count);
		ft_putchar(base[nbr % size], count);
	}
	else
		ft_putchar(base[nbr], count);
}
