NAME = libftprintf.a

SRC = printf.c parsing.c handle_type.c handle_type2.c utils.c

PATHSRCS = srcs

PATHOBJ = obj

HEADERS	= ./srcs

FLAGS = -Wall -Wextra -Werror

SRCS = $(addprefix $(PATHSRCS)/,$(SRC))
OBJS = $(addprefix $(PATHOBJ)/,$(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@(make -C libft/)
	@(cp libft/libft.a ./$(NAME))
	@(ar rc $(NAME) $(OBJS))
	@(ranlib $(NAME))

$(PATHOBJ)/%.o: $(PATHSRCS)/%.c
	@(mkdir -p obj)
	@(gcc $(FLAGS) -I $(HEADERS) -o $@ -c $<)

clean:
	@echo "Clean"
	@(make clean -C ./libft/)
	@(rm -rf $(PATHOBJ))
	@(rm -rf $(SRCS:.c=.o))

fclean:	clean
	@echo "Fclean"
	@(make fclean -C ./libft/)
	@(rm -rf $(NAME))

re:	fclean all

.PHONY:	all clean fclean re