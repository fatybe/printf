/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:21:31 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/24 17:49:20 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *forma, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!forma)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, forma);
	while (forma[i])
	{
		if (forma[i] == '%')
		{
			i++;
			if (forma[i] == '\0')
				return (-1);
			ft_function1(forma[i], args, &count);
		}
		else
			ft_putchar(forma[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
// int main()
// {

// 	ft_printf("%");
// 	return (0);
// }
