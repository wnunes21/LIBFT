NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS =  ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strlen.c
LIB = libft.h
OBJS = ${SRCS:%.c=%.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

${OBJS}:
	clang -I . -c ${FLAGS} ${SRCS}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME} *.gch

re: fclean all

run:
	clang ${FLAGS} main.c -L . lft

.PHONY: all clear fclean re run
