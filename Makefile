
NAME = libftprintf.a

SRC = ./sources/*.c ./libft/*.c

OBJ = $(SRC:.c=.o)
CFLAG = -g -Wall -Wextra -Werror
HEADER = includes/

all: $(NAME)

$(NAME):
	gcc $(CFLAG) -c -I $(HEADER) -I ./libft $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
