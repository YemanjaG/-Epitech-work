##
## EPITECH PROJECT, 2019
## Infin_add
## File description:
## Infin_add of CPool_infinadd_2019
##

SRC	=	main.c\
		canImove.c\
		find_coordc.c\
		switch_functions.c\
		stuff.c\
		stuff2.c\
		stuff3.c\

NAME	=	my_sokoban

all: $(NAME)

$(NAME):
	@$(MAKE) -C ./lib/my
	@gcc $(SRC) -o $(NAME) -L./lib -lmy -lncurses

clean:
	@$(MAKE) -C ./lib/my clean

fclean:		clean
	@rm -f $(NAME)
	@$(MAKE) -C ./lib/my fclean

re:	fclean all
