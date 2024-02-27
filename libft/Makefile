NAME = libft.a

FILES = isalnum.c \
		isalpha.c \
		isascii.c \
		isdigit.c \
		isprint.c \
		tolower.c \
		toupper.c

OBJS = $(FILES:.c=.o)

HEAD = libft.h

AR = ar rcs

RM = rm -f

GCC = gcc

CFLAGS = -Wall -Werror -Wextra

all:	$(NAME)

.c.o:
	$(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME):    $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:      
	$(RM) $(OBJS)

fclean:     clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re