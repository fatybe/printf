/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:27:38 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/24 22:41:30 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbrhex(unsigned long long ptr, int *count)
{
	char	*str;

	str = "0123456789abcdef";
	if (ptr >= 16)
	{
		ft_putunbrhex((ptr / 16), count);
		ft_putchar(str[ptr % 16], count);
	}
	if (ptr < 16)
		ft_putchar(str[ptr], count);
}

void	ft_putnbrhex(unsigned int ptr, int *count)
{
	char	*str;

	str = "0123456789abcdef";
	if (ptr >= 16)
	{
		ft_putnbrhex((ptr / 16), count);
		ft_putchar(str[ptr % 16], count);
	}
	if (ptr < 16)
		ft_putchar(str[ptr], count);
}

void	ft_putnbrhexupper(unsigned int ptr, int *count)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (ptr >= 16)
	{
		ft_putnbrhexupper((ptr / 16), count);
		ft_putchar(str[ptr % 16], count);
	}
	if (ptr < 16)
		ft_putchar(str[ptr], count);
}

void	ft_puthex(void *str, int *count)
{
	unsigned long long	ptr;

	ptr = (unsigned long long)str;
	if (!str)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_putunbrhex(ptr, count);
}
