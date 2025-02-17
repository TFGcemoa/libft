SRCS	=	ft_strlen.c \
			ft_isupper.c \
			ft_islower.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_countcharto.c \
			ft_countwords.c \
			ft_putnchar.c \
			ft_split.c \
			ft_countnbr.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strtrim.c \
			ft_freesubs.c

OBJ	= ${SRCS:.c=.o}

INCS	= libft.h

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

%.o: %.c	$(INCS)
		gcc $(CFLAGS) -I $(INCS) -o $@ -c $<

$(NAME):	${OBJ}
			ar rc ${NAME} ${OBJ}
			ranlib ${NAME}

all:		${NAME}

clean:		
			rm -rf ${OBJ}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean