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

void clear_refresh(void)
{
    clear();
    refresh();
}