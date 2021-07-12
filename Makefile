##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## 110borwein
##

SRC_MAIN	=	src/main.c	\

SRC		=	src/readme.c	\
			src/check.c	\
			src/init.c	\
			src/get.c	\
			src/borwein.c	\
			src/display.c	\
			##addprefix

SRC_TESTS	=	\

OBJ	=	$(SRC:.c=.o) $(SRC_MAIN:.c=.o)

LIB	= -L./lib -lmy

CRITERION_FLAGS	=	--coverage -lcriterion

CPPFLAGS = -I./include

CFLAGS = -W -Wall -Wextra -g3

CC = gcc

NAME	=	110borwein

TEST_NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my
		$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LIB) -lm
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		make fclean -C lib/my
		rm -f $(NAME)
		rm -f $(TEST_NAME)
		rm -f *.gcda
		rm -f *.gcno

re:		fclean all

debug:
		CFLAGS += -ggdb
		$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LIB)

tests_run:
		rm -f *.gcda
		rm -f *.gcno
		$(CC) -o $(TEST_NAME) $(CFLAGS) $(CPPFLAGS) $(SRC) tests/*.c $(CRITERION_FLAGS)
		./unit_tests

.PHONY: clean fclean re all tests_run