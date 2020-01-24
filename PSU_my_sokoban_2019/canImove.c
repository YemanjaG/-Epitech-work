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

int canimoveup(char **tab, int *cp)
{
    if (cp[0] <= 1)
        return 0;
    if (tab[cp[0] - 1][cp[1]] == '#')
        return 0;
    if (tab[cp[0] - 1][cp[1]] == 'X' && tab[cp[0] - 2][cp[1]] == 'X')
        return 0;
    if (tab[cp[0] - 1][cp[1]] == 'X' && tab[cp[0] - 2][cp[1]] == '#')
        return 0;
    if (tab[cp[0] - 1][cp[1]] == 'X' && tab[cp[0] - 2][cp[1]] == ' ')
        return 2;
    if (tab[cp[0] - 1][cp[1]] == 'X' && tab[cp[0] - 2][cp[1]] == 'O')
        return 2;
    return 1;
}

int canimovedown(char **tab, int *cp)
{
    if (tab[cp[0] + 1][cp[1]] == '#')
        return 0;
    if (tab[cp[0] + 1][cp[1]] == 'X' && tab[cp[0] + 2][cp[1]] == 'X')
        return 0;
    if (tab[cp[0] + 1][cp[1]] == 'X' && tab[cp[0] + 2][cp[1]] == '#')
        return 0;
    if (tab[cp[0] + 1][cp[1]] == 'X' && tab[cp[0] + 2][cp[1]] == ' ')
        return 2;
    if (tab[cp[0] + 1][cp[1]] == 'X' && tab[cp[0] + 2][cp[1]] == 'O')
        return 2;
    return 1;
}

int canimoveleft(char **tab, int *cp)
{
    if (tab[cp[0]][cp[1] - 1] == '#')
        return 0;
    if (tab[cp[0]][cp[1] - 1] == 'X' && tab[cp[0]][cp[1] - 2] == 'X')
        return 0;
    if (tab[cp[0]][cp[1] - 1] == 'X' && tab[cp[0]][cp[1] - 2] == '#')
        return 0;
    if (tab[cp[0]][cp[1] - 1] == 'X' && tab[cp[0]][cp[1] - 2] == ' ')
        return 2;
    if (tab[cp[0]][cp[1] - 1] == 'X' && tab[cp[0]][cp[1] - 2] == 'O')
        return 2;
    return 1;
}

int canimoveright(char **tab, int *cp)
{
    if (tab[cp[0]][cp[1] + 1] == '#')
        return 0;
    if (tab[cp[0]][cp[1] + 1] == 'X' && tab[cp[0]][cp[1] + 2] == 'X')
        return 0;
    if (tab[cp[0]][cp[1] + 1] == 'X' && tab[cp[0]][cp[1] + 2] == '#')
        return 0;
    if (tab[cp[0]][cp[1] + 1] == 'X' && tab[cp[0]][cp[1] + 2] == ' ')
        return 2;
    if (tab[cp[0]][cp[1] + 1] == 'X' && tab[cp[0]][cp[1] + 2] == 'O')
        return 2;
    return 1;
}