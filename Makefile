# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:39:29 by aidouiss          #+#    #+#              #
#    Updated: 2021/12/10 16:49:39 by aidouiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra -c

SRCS = ft_printc.c\
	   ft_printf.c\
	   ft_printiandd.c\
	   ft_printp.c\
	   ft_printpc.c\
	   ft_prints.c\
	   ft_printu.c\
	   ft_printxandx.c\
	   ft_putchar.c\

RM = rm -f

OBJS = $(SRCS:.c=.o)

LIB = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	gcc $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
