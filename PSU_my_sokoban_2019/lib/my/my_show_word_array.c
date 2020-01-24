/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** displays the content of an array of words
*/

#include <stdio.h>

int my_putstr(char const *str);
char my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != NULL){
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}
