# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdakech <sdakech@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 07:34:15 by sdakech           #+#    #+#              #
#    Updated: 2024/03/03 11:03:59 by sdakech          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_putpointer.c ft_putnbr.c \
		ft_printf.c ft_printf_utils2.c  ft_printf_utils.c 
		
CFLAGS = -Wall -Werror -Wextra

CC = cc

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -r $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean : 
	rm -rf $(SRCS:.c=.o)

fclean : clean
	rm -rf $(NAME)

re : fclean all