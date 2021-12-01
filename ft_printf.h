/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:05:32 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/30 22:35:35 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_strlen(const	char *s);
void	ft_putnbr(long int n);
int		ft_isalpha(int c);
int		ft_putchar(char c);
void	ft_putstr(char *s);
int		print_num(const char *c, va_list ap);
int		ft_print_str(va_list ap);
int		ft_print_char(va_list ap);
int		print_hex(const char *c, va_list ap);
int		ft_printf(const char *c, ...);
int		check_after(const char *c, va_list ap);
int		print_adress(va_list ap);
int		calcul(long int n);
void	lower_hex(unsigned int nbr);
void	upper_hex(unsigned int nbr);
int		hcalcul(unsigned int n);

#endif
