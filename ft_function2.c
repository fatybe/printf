/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:30:01 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/24 22:21:42 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10), count);
		ft_putchar((nb % 10 + '0'), count);
	}
	if (nb < 10)
		ft_putchar(nb + '0', count);
}

void	ft_putstr(const char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)", count));
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
}

void	ft_putunnbr(unsigned int nb, int *count)
{
	if (nb > 9)
	{
		ft_putunnbr((nb / 10), count);
		ft_putchar(((nb % 10) + '0'), count);
	}
	else
		ft_putchar((nb + '0'), count);
}
