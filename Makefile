NAME	= libftprintf.a

SRCS	= ft_printf.c ./converters/char.c ./converters/hexadecimal.c ./converters/numbers.c ./converters/pointer.c ./converters/string.c ./converters/utils.c

FOLDERS	= converters

vpath	= %.c ${FOLDERS}

OBJS	=${SRCS:%.c=%.o}

CFLAGS	= -Wall -Wextra -Werror

CC		= clang

all:	${NAME}

${NAME}:	${OBJS}
	ar -crs	${NAME} ${OBJS}

${OBJS}:	%.o: %.c
	${CC} ${CFLAGS} -o $@ -c $<

out:	${OBJS}
	gcc -g ${OBJS} main.c

val:
	valgrind --leak-check=full --show-leak-kinds=all --log-file=log ./a.out

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME} libftprintf.a

re:	fclean all