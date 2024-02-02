# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 15:38:43 by aileong           #+#    #+#              #
#    Updated: 2024/01/31 15:38:44 by aileong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c ./srcs/ft_atoi.c ./srcs/ft_putnbr.c ./srcs/operators.c

OBJS = $(SRC:.c=.o)

HEAD = ./includes/

NAME = do-op

RM	= rm -f

GCC	= gcc

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

.c.o:
	$(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME):    $(OBJS)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:      
	$(RM) $(OBJS)

fclean:     clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
