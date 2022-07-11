NAME	= libft.a
SRCS	= *.c
GCC	= gcc
CFLAG	= -Wall -Wextra -Werror
OBJS	= ${SRCS:.c=.o}

all		:	${NAME}

.c.o	:
			${GCC} ${CFLAG} -I includes -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean	:
			rm -f ${OBJS}

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all
