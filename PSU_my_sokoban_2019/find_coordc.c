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

int *find_coordc(char **tab, int *coordp)
{
    int *ret = malloc(sizeof(int) * 4);
    if (tab[coordp[0] - 1][coordp[1]] == 'X'){
        ret[0] = coordp[0] - 1;
        ret[1] = coordp[1];
        ret[2] = 1;
    } else if (tab[coordp[0] + 1][coordp[1]] == 'X'){
        ret[0] = coordp[0] + 1;
        ret[1] = coordp[1];
        ret[2] = 2;
    } else if (tab[coordp[0]][coordp[1] + 1] == 'X'){
        ret[0] = coordp[0];
        ret[1] = coordp[1] + 1;
        ret[2] = 3;
    } else if (tab[coordp[0]][coordp[1] - 1] == 'X'){
        ret[0] = coordp[0];
        ret[1] = coordp[1] - 1;
        ret[2] = 4;
    }
    return ret;
}

int *find_coordcu(char **tab, int *coordp)
{
    int *ret = malloc(sizeof(int) * 4);
    if (tab[coordp[0] - 1][coordp[1]] == 'X'){
        ret[0] = coordp[0] - 1;
        ret[1] = coordp[1];
        ret[2] = 1;
    }
    return ret;
}

int *find_coordcd(char **tab, int *coordp)
{
    int *ret = malloc(sizeof(int) * 4);
    if (tab[coordp[0] + 1][coordp[1]] == 'X'){
        ret[0] = coordp[0] + 1;
        ret[1] = coordp[1];
        ret[2] = 2;
    }
    return ret;
}

int *find_coordcr(char **tab, int *coordp)
{
    int *ret = malloc(sizeof(int) * 4);
    if (tab[coordp[0]][coordp[1] + 1] == 'X'){
        ret[0] = coordp[0];
        ret[1] = coordp[1] + 1;
        ret[2] = 3;
    }
    return ret;
}

int *find_coordcl(char **tab, int *coordp)
{
    int *ret = malloc(sizeof(int) * 4);
    if (tab[coordp[0]][coordp[1] - 1] == 'X'){
        ret[0] = coordp[0];
        ret[1] = coordp[1] - 1;
        ret[2] = 4;
    }
    return ret;
}