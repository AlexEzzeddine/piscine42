NAME = advanced-do-op
LDIR = ./includes/
PATH_SRC = ./srcs/
SRC = $(PATH_SRC)main.c $(PATH_SRC)operations.c $(PATH_SRC)ft.c

OBJ = main.o operations.o ft.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(LDIR) -c $(SRC)
	gcc $(OBJ) -o $(NAME)
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all