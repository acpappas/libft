NAME = libft.a

PART1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c

PART2 = ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c

SRCS =	$(PART1) $(PART2)  

OUT = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME):

$(NAME):$(OUT)
	$(CC) $(CFLAGS) -o $(NAME) $(OUT)

%.o: %.c
	$(CC) -c $(CFLAGS) $*.c 
so:
	gcc -c ft_*.c -Wall -Westra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm*.o

clean:
	$(RM) *.o *~ $(NAME)
