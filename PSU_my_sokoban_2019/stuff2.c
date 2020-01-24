/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** My_sokoban
*/

#include "include/my.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int do_i_fit(char **tab)
{
    int i = 0;
    char* msg = "Terminal is too small, please resize";
    for (i = 0; tab[i] != NULL; i++);
    while (1){
        if (i > LINES){
            clear();
            mvprintw(LINES/2, (COLS / 2) - (my_strlen(msg) / 2), msg);
            refresh();
            if (getch() == 410)
                break;
        }
        else
            break;
    }
}

int is_valid(char **tab)
{
    int valid = 0;
    for (int i = 0; tab[i] != NULL; i++){
        for (int a = 0; tab[i][a] != '\n'; a++){
            if (tab[i][a] != '#'
            && tab[i][a] != 'O'
            && tab[i][a] != 'P'
            && tab[i][a] != '\n'
            && tab[i][a] != 'X'
            && tab[i][a] != ' '){
                valid++;
            }
        }
    }
    return valid;
}

void display_help(void)
{
    my_putstr("USAGE :\n.      /my_sokoban map\nDESCRIPTION :\n");
    my_putstr("-----------------------------------------------------------\n");
    my_putstr("|             This is a classic sokoban game.             |\n");
    my_putstr("|                                                         |\n");
    my_putstr("|The player is represented by the letter 'P' walls are '#'|\n");
    my_putstr("|               The goal is to push the 'X'               |\n");
    my_putstr("|         on the 'O' until there are no 'O' remaining.    |\n");
    my_putstr("|                                                         |\n");
    my_putstr("|-------------------------CONTROLS------------------------|\n");
    my_putstr("|                                                         |\n");
    my_putstr("|         To move your character use the arrow keys       |\n");
    my_putstr("|               To reset map press the spacebar           |\n");
    my_putstr("|                 To quit game press backspace            |\n");
    my_putstr("|                                                         |\n");
    my_putstr("|---------------------------------------------------------|\n");
    my_putstr("|                                                         |\n");
    my_putstr("|                    Good luck have fun !                 |\n");
    my_putstr("|                                                         |\n");
    my_putstr("-----------------------------------------------------------\n");
}

int error_gestion(int ac, char **av, char** tab)
{
    int valid = 0;
    if (ac != 2)
        valid++;
    if (is_valid(tab) != 0)
        valid++;
    return valid;
}

int handle_it(int ac, char **av, int boi)
{
    if (ac != 2)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h' && boi == 1){
        display_help();
        return 0;
    }
    return 1;
}
