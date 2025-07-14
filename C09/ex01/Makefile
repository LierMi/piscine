CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDES_DIR = includes
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
LIBC = ar rc
LIBR = ranlib

srcs/%.o: srcs/%.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES_DIR}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all