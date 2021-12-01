/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:02:49 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/30 22:12:54 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_after(const char *c, va_list ap)
{
	int	i;

	i = 0;
	if (ft_isalpha(*c))
	{
		if (*c == 'd' || *c == 'i' || *c == 'u')
			i = print_num(c, ap);
		else if (*c == 'c')
			i = ft_print_char(ap);
		else if (*c == 's')
			i = ft_print_str(ap);
		else if (*c == '%')
			i = ft_putchar('%');
		else if (*c == 'x' || *c == 'X')
			i = print_hex(c, ap);
		if (*c == 'p')
			i = print_adress(ap);
	}
	return (i);
}

int	ft_printf(const char *c, ...)
{
	va_list	ap;
	int		i;
	int		len;
	int		d;

	d = 0;
	i = 0;
	len = 0;
	va_start(ap, c);
	while (c[i])
	{
		if (c[i] == '%')
		{
			if (c[i + 1] == 0)
				break ;
			len = len + check_after(&c[++i], ap);
		}
		else
			d = d + ft_putchar(c[i]);
		i++;
	}
	va_end(ap);
	return (len + d);
}
