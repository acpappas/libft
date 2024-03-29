NAME =		libft.a

PART1 =		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strstr.c ft_strnstr.c \
		ft_strcat.c ft_strncat.c ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_strchr.c ft_strrchr.c \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_toupper.c \
	   	ft_tolower.c ft_isprint.c

PART2 =		ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strequ.c ft_strjoin.c ft_strmapi.c \
		ft_strmap.c ft_strnequ.c ft_strsub.c  ft_strtrim.c ft_itoa.c ft_strsplit.c\
		ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c

PART3 =		ft_lstnew.c ft_lstadd.c ft_lstdelone.c ft_lstdel.c ft_lstiter.c ft_lstmap.c

EXTRAS =	ft_intlen.c ft_isspace.c ft_wcount.c ft_wlength.c

SRCS =		$(PART1) $(PART2) $(PART3) $(EXTRAS)  

OBJS =		$(SRCS:.c=.o)

HEAD =		libft.h

GHEAD =		libft.h.gch

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	
			$(CC) $(CFLAGS) -c $(SRCS) $(HEAD)
			ar rc $(NAME) $(OBJS) $(GHEAD)
			ranlib $(NAME)

so:
			$(CC) -c ft_*.c $(CFLAGS) -fPIC
			$(CC) -shared -o libft.so -fPIC ft*.o 
clean:
			/bin/rm -f $(OBJS) $(GHEAD)

fclean:		clean
			/bin/rm -f $(NAME)

re:		fclean all
