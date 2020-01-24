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

void move_caisse(char **tab, int *coordc, int sens)
{
    if (sens == 1){
        tab[coordc[0] - 1][coordc[1]] = 'X';
    }
    else if (sens == 2){
        tab[coordc[0] + 1][coordc[1]] = 'X';
    }
    else if (sens == 3){
        tab[coordc[0]][coordc[1] + 1] = 'X';
    }
    else if (sens == 4){
        tab[coordc[0]][coordc[1] - 1] = 'X';
    }
}

void case_right(char **tab, int *coordp)
{
    if (canimoveright(tab, coordp) == 1)
        coordp[1] += 1;
    else if (canimoveright(tab, coordp) == 2){
        move_caisse(tab, find_coordcr(tab, coordp), 3);
        coordp[1] += 1;
    }
}

void case_left(char **tab, int *coordp)
{
    if (canimoveleft(tab, coordp) == 1)
        coordp[1] -= 1;
    else if (canimoveleft(tab, coordp) == 2){
        move_caisse(tab, find_coordcl(tab, coordp), 4);
        coordp[1] -= 1;
    }
}

void case_up(char **tab, int *coordp)
{
    if (canimoveup(tab, coordp) == 1)
        coordp[0] -= 1;
    else if (canimoveup(tab, coordp) == 2){
        move_caisse(tab, find_coordcu(tab, coordp), 1);
        coordp[0] -= 1;
    }
}

void case_down(char **tab, int *coordp)
{
    if (canimovedown(tab, coordp) == 1)
        coordp[0] += 1;
    else if (canimovedown(tab, coordp) == 2){
        move_caisse(tab, find_coordcd(tab, coordp), 2);
        coordp[0] += 1;
    }
}