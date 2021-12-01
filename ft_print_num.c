/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:39:29 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/30 22:28:05 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	calcul(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * (-1);
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	print_num(const char *c, va_list ap)
{
	long int	d;

	if (*c == 'd' || *c == 'i')
	{
		d = va_arg(ap, int);
		ft_putnbr(d);
	}
	if (*c == 'u')
	{
		d = va_arg(ap, int);
		if (d >= 0)
			ft_putnbr(d);
		else if (d < 0)
			ft_putnbr((unsigned int) d);
		return (calcul((unsigned int)d));
	}
	return (calcul(d));
}
