# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 14:54:49 by mmanouze          #+#    #+#              #
#    Updated: 2021/12/01 00:54:22 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
ft_print_char.c \
ft_print_hex.c \
ft_print_num.c \
ft_print_str.c \
ft_printf.c \
ft_putchar.c \
ft_putnbr.c \
ft_putstr.c \
ft_strlen.c \
ft_print_adress.c

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean:    clean
	rm -f ${NAME}

re:    fclean all

.PHONY: all clean fclean re
