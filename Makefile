##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## abc
##

SRC = window.c

OBJ = $(SRC:.c=.o)

NAME = main

CFLAGS = -Wall -Wextra -I./SFML/Graphics -I./SFML/Window -I./SFML/Config

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window


run: all clean
	./$(NAME)
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all
