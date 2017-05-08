OPTIONS = -c -I$(IDIR)

NAME = libft.a
IDIR = ./includes/

PATH_SRC = ./srcs/
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -Wall -Wextra -Werror $(OPTIONS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all