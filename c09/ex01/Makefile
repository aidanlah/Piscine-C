# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 16:12:49 by aileong           #+#    #+#              #
#    Updated: 2024/01/30 16:16:16 by aileong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS	= $(SRC:.c=.o)

HEAD	= ./includes/

NAME	= libft.a

AR	= ar rcs

RM	= rm -f

LIB	= ranlib

GCC	= gcc

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

.c.o:
	$(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME):    $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

clean:      
	$(RM) $(OBJS)

fclean:     clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
