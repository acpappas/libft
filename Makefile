NAME =		libft.a

PART1 =		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
			ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_atoi.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_toupper.c ft_tolower.c \

PART2 =		ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		   	ft_striter.c ft_striteri.c ft_itoa.c \
			ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \

EXTRAS =	ft_intlen.c ft_isspace.c ft_ispunct.c

SRCS =		$(PART1) $(PART2) $(EXTRAS)  

OBJS =		$(SRCS:.c=.o)

HEAD =		libft.h

GHEAD =		libft.h.gch

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	
			$(CC) $(CFLAGS) -c $(SRCS) $(HEAD)
			ar rc $(NAME) -o $(OBJS) $(GHEAD)
			ranlib $(NAME) 
so:
			gcc -c ft_*.c -Wall-Westra-Werror
			gcc -shared -o libft.so -fPIC ft*.o
			rm*.o

clean:
			/bin/rm -f $(OBJS) $(GHEAD)

fclean:		clean $(NAME)

re:			fclean all
