##
## EPITECH PROJECT, 20177
## CPool_Tree_2017
## File description:
## Makefile
##

SRC		=	src/tools.c		\
			src/tree.c		\
			src/main.c

OBJ		=	$(SRC:.c=.o)

INC		=	-I./include

CFLAGS	=	-W -Wall -Werror -Wextra $(INC)

NAME	=	tree

all:	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re : 	fclean all

.PHONY:	all clean fclean re
