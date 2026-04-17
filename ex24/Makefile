# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/17 09:36:32 by frodrig2          #+#    #+#              #
#    Updated: 2026/04/17 09:41:31 by frodrig2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME) :
	cc -Wall -Werror -Wextra -c $(SRC) && ar rc $(NAME) $(OFILES) && ranlib $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
