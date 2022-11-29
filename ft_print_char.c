/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:04:58 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/29 10:18:19 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *count)
{
	if (*count != -1)
	{
		if (write(1, &c, 1) != -1)
			*count = *count + 1;
		else
			*count = -1;
	}
}

void	ft_putstr(char *s, int *count)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], count);
		i++;
	}
}
