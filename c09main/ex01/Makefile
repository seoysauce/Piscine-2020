# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seojeong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/17 21:10:24 by seojeong          #+#    #+#              #
#    Updated: 2020/06/17 21:13:18 by seojeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJECT	= ${SRCS:.c=.o}
GCC		= gcc
FLAG	= -Wall -Wextra -Werror
OPTION	= -c
HEADER 	= includes


all: ${NAME}

${NAME}: ${OBJECT}
	ar rc $(NAME) $(OBJECT)

.c.o:
	${GCC} ${FLAG} ${OPTION} -I ${HEADER} $< -o $@

clean:
	rm -f ${OBJECT}

fclean: clean
	rm -f ${NAME}

re: fclean all
