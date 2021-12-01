/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:01:00 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/30 22:19:34 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	a_calcul(unsigned long int n)
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

void	lower_ad(unsigned long int nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr > 15)
	{
		lower_ad(nbr / 16);
		ft_putchar(base[nbr % 16]);
	}
	else
		ft_putchar(base[nbr]);
}

int	print_adress(va_list ap)
{
	unsigned long int	nbr;

	nbr = va_arg(ap, unsigned long int);
	write(1, "0x", 2);
	lower_ad(nbr);
	return (a_calcul(nbr) + 2);
}
