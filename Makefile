NAME	= libftprintf.a

SRC		= printf.c parsing.c handle_type.c handle_type2.c utils.c
OBJS	= printf.o parsing.o handle_type.o handle_type2.o utils.o

cc		= gcc
RM		= rm -rf
HEADERS	= include
CFLAGS	= -Wall -Werror -Wextra

all:	${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}
			
%.c%.o:
			${CC} ${CFLAGS} -I${HEADERS} -c $< -o ${<:.c=.o}

clean:
	@echo "CLEAN"
	@(make clean -C ./libft/)
	@(rm -rf ${OBJS})

fclean:	clean
	@echo "FCLEAN"
	@(make fclean -C ./libft/)
	@(rm -rf ${NAME})

re:		fclean all

.PHONY:	all clean fclean re