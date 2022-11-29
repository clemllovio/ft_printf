/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:05:45 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/29 10:31:23 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

//ft_printf.c
int		ft_printf(const char *format, ...);

//ft_print_nbr.c
void	ft_check_args(char format, va_list args, int *count);

//ft_print_char.c
void	ft_putchar(int c, int *count);
void	ft_putstr(char *s, int *count);

//ft_print_nbr.c
void	ft_putnbr(int n, int *count);
void	ft_putnbr_base(unsigned long nbr, unsigned long size, \
					char *base, int *count);

#endif