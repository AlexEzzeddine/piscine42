NAME = ft_display_file

SRC_DIR = srcs/
INCLUDES_DIR = includes/

FLAGS=-Wall -Wextra -Werror

FUNCTIONS=main.c
SRCS = $(patsubst %,$(SRC_DIR)%,$(FUNCTIONS))
OBJ = $(patsubst %.c,%.o,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ):
	gcc -I$(INCLUDES_DIR) $(FLAGS) -c $(SRCS)

$(NAME): $(OBJ)
	gcc -I$(INCLUDES_DIR) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all