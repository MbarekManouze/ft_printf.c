/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:07:16 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/30 22:24:38 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hcalcul(unsigned int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

void	upper_hex(unsigned int nbr)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr > 15)
	{
		upper_hex(nbr / 16);
		ft_putchar(base[nbr % 16]);
	}
	else
		ft_putchar(base[nbr]);
}

void	lower_hex(unsigned int nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr > 15)
	{
		lower_hex(nbr / 16);
		ft_putchar(base[nbr % 16]);
	}
	else
		ft_putchar(base[nbr]);
}

int	print_hex(const char *c, va_list ap)
{
	unsigned int	nbr;	

	nbr = va_arg(ap, unsigned int);
	if (*c == 'x')
		lower_hex(nbr);
	if (*c == 'X')
		upper_hex(nbr);
	return (hcalcul(nbr));
}
