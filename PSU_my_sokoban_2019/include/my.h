/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contains all my headers
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_put_nbr(int nb);
char my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strupcase(char *str);
int my_show_word_array(char * const *tab);
int set_sign(char const *str);
int transform(char const *str);
int separator(char c);
char *my_strdup(char const *src);
int canimoveup(char **tab, int *coordp);
int canimovedown(char **tab, int *coordp);
int canimoveleft(char **tab, int *coordp);
int canimoveright(char **tab, int *coordp);
int *find_coordc(char **tab, int *coordp);
int *find_coordcu(char **tab, int *coordp);
int *find_coordcd(char **tab, int *coordp);
int *find_coordcr(char **tab, int *coordp);
int *find_coordcl(char **tab, int *coordp);
void case_right(char **tab, int *coordp);
void case_left(char **tab, int *coordp);
void case_up(char **tab, int *coordp);
void case_down(char **tab, int *coordp);
void move_caisse(char **tab, int *coordc, int sens);
void win_msg(void);
int check_win(char **tab, int* objpos, int objcount);
int *objective_pos(char **tab, int objcount);
int objective_count(char **tab);
int* find_player(char **tab);
int do_i_fit(char **tab);
int is_valid(char **tab);
void display_help(void);
int error_gestion(int ac, char **av, char** tab);
int handle_it(int ac, char **av, int boi);
void clear_refresh(void);
int main(int ac, char **av);

#endif
