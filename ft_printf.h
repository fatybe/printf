/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:28:19 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/24 16:14:47 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *forma, ...);
void	ft_putnbr(int nb, int *count);
void	ft_putchar(int c, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_puthex(void *str, int *count);
void	ft_function1(char forma, va_list args, int *count);
void	ft_putunbrhex(unsigned long long ptr, int *count);
void	ft_putnbrhex(unsigned int ptr, int *count);
void	ft_putnbrhexupper(unsigned int ptr, int *count);
void	ft_putunnbr(unsigned int nb, int *count);

#endif
