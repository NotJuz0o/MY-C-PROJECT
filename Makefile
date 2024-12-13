##
## EPITECH PROJECT, 2024
## Project
## File description:
## Makefile
##

.PHONY: all clean fclean re lib

SRC =	src/main.c

OBJ = $(SRC:.c=.o)

NAME = project

CFLAGS = -I./include

LIBS = -L./lib -L. -lmy

all: lib $(NAME)

lib:
	$(MAKE) -C lib/my

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIBS) -g

clean:
	rm -f $(OBJ)
	$(MAKE) -C lib/my clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C lib/my fclean

re: fclean all
