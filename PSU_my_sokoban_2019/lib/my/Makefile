##
## EPITECH PROJECT, 2019
## task01
## File description:
## task01 of CPool_Day10_2019
##

SRC	=	my_compute_power_rec.c\
		my_compute_square_root.c\
		my_find_prime_sup.c\
		my_is_prime.c\
		my_put_nbr.c\
		my_putchar.c\
		my_putstr.c\
		my_revstr.c\
		my_showmem.c\
		my_showstr.c\
		my_sort_int_array.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strcapitalize.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strupcase.c\
		my_show_word_array.c\
		set_sign.c\
		transform.c\
		separator.c\
		my_strdup.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all : $(NAME)

$(NAME):	$(OBJ)
	@echo "Building the .o files.."
	@gcc -c $(SRC)
	@echo "Building my library.."
	@ar rc $(NAME) $(OBJ)
	@cp $(NAME) ../
	@mkdir -p ../../include
	@cp *.h ../../include

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f $(NAME)
	@rm -f ../$(NAME)
	@rm -r ../../include

re: 	fclean all
