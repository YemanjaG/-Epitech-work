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

int* find_player(char **tab)
{
    int *coordp = malloc(sizeof(int) * 10);
    int ligne = 0;
    int colonne = 0;
    for (int i = 0; tab[i] != NULL; i++){
        for (int a = 0; tab[i][a] != '\0'; a++){
            if (tab[i][a] == 'P'){
                coordp[0] = i;
                coordp[1] = a;
            }
        }
    }
    return coordp;
}

int objective_count(char **tab)
{
    int ret = 0;
    for (int i = 0; tab[i] != NULL; i++){
        for (int a = 0; tab[i][a] != '\n'; a++){
            if (tab[i][a] == 'O')
                ret++;
        }
    }
    return ret;
}

int *objective_pos(char **tab, int objcount)
{
    int *ret = malloc(sizeof(int) * objcount + 10);
    int b = 0;
    for (int i = 0; tab[i] != NULL; i++){
        for (int a = 0; tab[i][a] != '\n'; a++){
            if (tab[i][a] == 'O'){
                ret[b] = i;
                ret[b + 1] = a;
                b += 2;
            }
        }
    }
    return ret;
}

int check_win(char **tab, int* objpos, int objcount)
{
    int ok = objcount * 2;
    int win = 0;
    for (int a = 0; a < ok; a++){
        if (tab[objpos[a]][objpos[a + 1]] == 'X')
            win++;
        a++;
    }
    if (win == objcount)
        return 1;
    else
        return 0;
}

void win_msg(void)
{
    char *win = "YOU WIN ! GG ! Press escape to quit game.";
    while (1){
        mvprintw(LINES/2, (COLS / 2) - (my_strlen(win) / 2), win);
        refresh();
        if (getch() == 27){
            clear_refresh();
            exit(0);
        }
    }
}