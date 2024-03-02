NAME = libft.a

FILES = isalpha.c \
		isdigit.c \
		isalnum.c \
		isascii.c \
		isprint.c \
		strlen.c \
		memset.c \
		bzero.c \
		memcpy.c \
		memmove.c \
		strlcpy.c \
		strlcat.c \
		toupper.c \
		tolower.c \
		strrchr.c \
		strncmp.c \
		memchr.c \
		memcmp.c \
		strnstr.c \
		atoi.c \
		calloc.c \
		strdup.c \
		substr.c \
		strjoin.c \
		strtrim.c \
		split.c \
		itoa.c \
		strmapi.c \
		stritri.c \
		putchar_fd.c \
		putstr_fd.c \
		putendl_fd.c \
		putnbr_fd.c

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