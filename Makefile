# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 18:42:40 by fbenjama          #+#    #+#              #
#    Updated: 2024/11/24 01:52:26 by fbenjama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS= -Wall -Wextra -Werror

SRCS = ft_function2.c ft_printconversions.c ft_printf.c ft_function1.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY  :  all clean fclean re
