NAME = bsq
SRC = main.c fill.c settings.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -O3 -I. -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
