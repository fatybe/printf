/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printconversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:31:21 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/24 01:56:06 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_function1(char forma, va_list args, int *count)
{
	if (forma == 'd' || forma == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (forma == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (forma == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (forma == 'p')
		ft_puthex(va_arg(args, void *), count);
	else if (forma == 'u')
		ft_putunnbr(va_arg(args, unsigned int), count);
	else if (forma == 'x')
		ft_putnbrhex(va_arg(args, unsigned int), count);
	else if (forma == 'X')
		ft_putnbrhexupper(va_arg(args, unsigned int), count);
	else if (forma == '%')
		ft_putchar('%', count);
	else
	{
		ft_putchar('%', count);
		ft_putchar(forma, count);
	}
}
