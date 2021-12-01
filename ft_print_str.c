/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:17:46 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/30 22:29:19 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(va_list ap)
{
	int		i;
	char	*s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr(s);
	i = ft_strlen(s);
	return (i);
}
